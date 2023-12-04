#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_EXPRESSION_SIZE 100

struct Stack {
    int top;
    unsigned capacity;
    char* array;
};

struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char*)malloc(stack->capacity * sizeof(char));
    return stack;
}

bool isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

void push(struct Stack* stack, char item) {
    stack->array[++stack->top] = item;
}

char pop(struct Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->array[stack->top--];
    }
    return '\0';
}

char peek(struct Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->array[stack->top];
    }
    return '\0';
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char op) {
    if (op == '^') {
        return 3;
    } else if (op == '*' || op == '/') {
        return 2;
    } else if (op == '+' || op == '-') {
        return 1;
    }
    return 0;
}

void infixToPostfix(const char* infix, char* postfix) {
    struct Stack* stack = createStack(strlen(infix));
    int i, j = 0;

    for (i = 0; infix[i]; i++) {
        char c = infix[i];

        if (isalnum(c)) {
            postfix[j++] = c;
        } else if (c == '(') {
            push(stack, c);
        } else if (c == ')') {
            while (!isEmpty(stack) && peek(stack) != '(') {
                postfix[j++] = pop(stack);
            }
            if (!isEmpty(stack) && peek(stack) != '(') {
                printf("Invalid expression: Mismatched parentheses.\n");
                return;
            } else {
                pop(stack);
            }
        } else if (isOperator(c)) {
            while (!isEmpty(stack) && precedence(c) <= precedence(peek(stack))) {
                postfix[j++] = pop(stack);
            }
            push(stack, c);
        }
    }

    while (!isEmpty(stack)) {
        if (peek(stack) == '(') {
            printf("Invalid expression: Mismatched parentheses.\n");
            return;
        }
        postfix[j++] = pop(stack);
    }

    postfix[j] = '\0';
}

int main() {
    char infix[MAX_EXPRESSION_SIZE];
    char postfix[MAX_EXPRESSION_SIZE];

    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);

    infix[strlen(infix) - 1] = '\0';

    infixToPostfix(infix, postfix);

    if (postfix[0] != '\0') {
        printf("Postfix expression: %s\n", postfix);
    }

    return 0;
}

