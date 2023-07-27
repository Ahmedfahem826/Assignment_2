#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int originalNumber, remainder, digits = 0, result = 0;

    originalNumber = number;

    // count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number;

    // calculate the sum of the digits raised to the power of the number of digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }

    // check if the number is an Armstrong number
    if (result == number) {
        return 1; // number is an Armstrong number
    } else {
        return 0; // number is not an Armstrong number
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
