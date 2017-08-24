'use strict';

const fs = require('fs'),
    path = require('path'),
    Linter = require('./linter');

function calculateStatsPerFile(messages) {
    return messages.reduce((stat, message) => {
        if (message.fatal || message.severity === 2) {
            stat.errorCount++;
        }
        else {
            stat.warningCount++;
        }

        return stat;
    }, {
        errorCount: 0,
        warningCount: 0
    });
}

function calculateStatsPerRun(results) {
    return results.reduce((stat, result) => {
        stat.errorCount += result.errorCount;
        stat.warningCount += result.warningCount;

        return stat;
    }, {
        errorCount: 0,
        warningCount: 0
    });
}

function processText(text, filename, linter) {
    linter.reset();

    let filePath,
        fileExtension,
        messages;

    if (filename) {
        filePath = path.resolve(filename);
        fileExtension = path.extname(filename);
    }

    messages = linter.verify(text, filename);

    const stats = calculateStatsPerFile(messages);

    const result = {
        filePath: filename,
        messages,
        errorCount: stats.errorCount,
        warningCount: stats.warningCount
    };

    if (result.errorCount + result.warningCount > 0) {
        result.source = text;
    }

    return result;
}

function processFile(filename, options, linter) {
    const text = fs.readFileSync(path.resolve(filename), 'utf8'),
        result = processText(text, filename, linter);

    return result;

}

class CLIEngine {
    constructor(options) {
        options = Object.assign(
            Object.create(null),
            { cwd: process.cwd() },
            options
        );

        this.options = options;
        this.linter = new Linter();
    }

    executeOnFiles(patterns) {
        const results = [],
            options = this.options;

        function executeOnFile(filename, linter) {
            const result = processFile(filename, options, linter);
            results.push(result);
        }

        patterns.forEach(filename => {
            executeOnFile(filename, this.linter);
        });

        const stats = calculateStatsPerRun(results);

        return {
            results,
            errorCount: stats.errorCount,
            warningCount: stats.warningCount
        };
    }

    executeOnText(text, filename) {
        const results = [],
            options = this.options,;

        if (filename && !path.isAbsolute(filename)) {
            filename = path.resolve(options.cwd, filename);
        }

        results.push(processText(text, filename, this.linter));

        const stats = calculateStatsPerRun(results);

        return {
            results,
            errorCount: stats.errorCount,
            warningCount: stats.warningCount
        };
    }
}

module.exports = CLIEngine;