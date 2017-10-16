'use strict';

const Parser = require('../../parser');

module.exports = {
    create(context) {
        const report = (node) => {
            const funcName = node.children[1].getText();
            if (funcName == null) {
                return;
            }

            const first = funcName.charAt(0);

            if (first !== first.toLowerCase()) {
                context.report({
                    message: `Function '${funcName}' is not camel case`,
                    loc: {
                        start: node.start,
                        end: node.stop
                    }
                });
            }
        };

        return {
            'functionDeclaration:exit': function(node) {
                report(node);
            },
            'subDeclaration:exit': function(node) {
                report(node);
            }
        };
    }
};