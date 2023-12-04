#include <bits/stdc++.h>
using namespace std;

int tempVar = 1;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int getPrecedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}
string convertInfixToPostfix(string infixExpression) {
    stack<char> stack;
    string postfixExpression = "";
    
    for (char c : infixExpression) {
        if (isalnum(c)) {
            postfixExpression += c;
        } else if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            while (!stack.empty() && stack.top() != '(') {
                postfixExpression += stack.top();
                stack.pop();
            }
            if (!stack.empty() && stack.top() == '(') {
                stack.pop();
            } else {
                std::cerr << "Mismatched parentheses" << std::endl;
                exit(1);
            }
        } else if (isOperator(c)) {
            while (!stack.empty() && getPrecedence(c) <= getPrecedence(stack.top())) {
                postfixExpression += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }
  while (!stack.empty()) {
        if (stack.top() == '(') {
            cout << "Mismatched parentheses" << endl;
            exit(1);
        }
        postfixExpression += stack.top();
        stack.pop();
    }

    return postfixExpression;
}

void convertTo3AC(string expression){
    stack<string> myStack;
    for(char c: expression){
        if(isalnum(c)){
            string tempString = "";
            tempString += c;
            myStack.push(tempString);
        } 
        
        else {
            string rightOperand = myStack.top();
            myStack.pop();
            string leftOperand = myStack.top();
            myStack.pop();
            string result = "t" + to_string(tempVar) + "=" + leftOperand + "" + c + "" + rightOperand;
            cout << result << endl;
            myStack.push("t"+to_string(tempVar));
            tempVar+=1;
        }
    }
}
int main() {
    string infixExpression, postfixExpression;
    string expression;

    cout << "Enter the expression: ";
    cin >> expression;

    int index = expression.find('=');

    infixExpression = expression.substr(index + 1);
    postfixExpression = convertInfixToPostfix(infixExpression);
    cout << postfixExpression << endl;
    convertTo3AC(postfixExpression);
    cout << "x=t" << to_string(tempVar-1) << endl;
    return 0;
}