#include <stdio.h>
#include "lexer.h"
#include "parser.h"
#include "evaluator.h"

int main() {
    char input[256];
    printf("Enter an expression: ");
    fgets(input, sizeof(input), stdin);

    Token *tokens = tokenize(input);
    Node *ast = parse(tokens);
    int result = evaluate(ast);

    printf("Result: %d\n", result);

    // Free allocated memory (not shown)
    return 0;
}
