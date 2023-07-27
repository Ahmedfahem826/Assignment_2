#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    double number1, number2, result;

    printf("Enter a mathematical operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &number1);

    printf("Enter number 2: ");
    scanf("%lf", &number2);

    switch(operator) {
        case '+':
            result = number1 + number2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if(number2 != 0) {
                result = number1 / number2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
