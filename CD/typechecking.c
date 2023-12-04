#include <stdio.h> 
#include <stdbool.h> 
#include<string.h>

typedef enum
{
INT, FLOAT, ERROR
} DataType;

DataType checkBinaryOperation(DataType left, char operator, DataType right)
{
switch (operator)
{
case '+':
case '-':
case '*':
case '/':
if (left == INT && right == INT)
{
return INT;
}
else if ((left == INT && right == FLOAT) || (left == FLOAT && right == INT) || (left
== FLOAT && right == FLOAT))
{
return FLOAT;
}
else
{
return ERROR;
}
default: return ERROR;
}
}

int main()
{
char operator;
DataType leftType, rightType, resultType;

printf("Enter the left operand data type (INT or FLOAT): "); char leftTypeStr[10];
scanf("%s", leftTypeStr);

printf("Enter the operator (+, -, *, /): ");
scanf(" %c", &operator); // Note the space before %c to consume any whitespace characters

printf("Enter the right operand data type (INT or FLOAT): ");
 
char rightTypeStr[10]; scanf("%s", rightTypeStr);

// Convert the entered data type strings to DataType values if (strcmp(leftTypeStr, "INT") == 0)
if (strcmp(leftTypeStr, "INT") == 0)
{
leftType = INT;
}
else if (strcmp(leftTypeStr, "FLOAT") == 0)
{
leftType = FLOAT;
}
else
{
leftType = ERROR;
}

if (strcmp(rightTypeStr, "INT") == 0)
{
rightType = INT;
}
else if (strcmp(rightTypeStr, "FLOAT") == 0)
{
rightType = FLOAT;
}
else
{
rightType = ERROR;
}

resultType = checkBinaryOperation(leftType, operator, rightType);

if (resultType == ERROR)
{
printf("Error: Incompatible types in the expression.\n");
}
else
{
printf("Result type of the expression: %s\n", resultType == INT ? "INT" : "FLOAT");
}

return 0;
}



