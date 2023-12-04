#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidArithmeticExpression(const char* expression) {
    int len = strlen(expression);
    int balance = 0;

    for (int i = 0; i < len; i++) {
        char c = expression[i];

        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance < 0) {
                return false; // Unbalanced closing parenthesis
            }
        }

        // Check for valid characters in the expression
        if (!isdigit(c) && !isspace(c) && c != '+' && c != '-' && c != '*' && c != '/' && c != '(' && c != ')') {
            return false; // Invalid character found
        }
    }

    return (balance == 0); // Expression is valid if parentheses are balanced
}

int main() {
    char expression[100];

    printf("Enter an arithmetic expression: ");
    fgets(expression, sizeof(expression), stdin);

    if (expression[strlen(expression) - 1] == '\n') {
        expression[strlen(expression) - 1] = '\0';
    }

    if (isValidArithmeticExpression(expression)) {
        printf("Valid arithmetic expression.\n");
    } else {
        printf("Invalid arithmetic expression.\n");
    }

    return 0;
}

