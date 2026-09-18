#include <stdio.h>
#include <stdlib.h>

double caclulate(double a, double b, char o);

int main()
{
    double num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf (" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("Answer: %f\n", num1+num2);
    } else if (op == '-'){
        printf("Answer: %f\n", num1-num2);
    } else if (op == '/'){
        printf("Answer: %f\n", num1/num2);
    } else if (op == '*'){
        printf("Answer: %f\n", num1*num2);
    } else {
        printf("Please enter a proper operator.\n");
        printf("EXAMPLE: [ +, -, *, / ]\n");
    }

    return 0;
}

double caclulate(double a, double b, char o)
{
    if (o == '+')
    {
        return a + b;
    } else if (o == '-'){
        return a - b;
    } else if (o == '/'){
        return a / b;
    } else if (o == '*'){
        return a*b;
    } else {
        return '\0';
    }
}