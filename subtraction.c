#include <stdio.h>

int main() {
    int firstNum, secondNum, result;

    // Ask user for input
    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    // Perform subtraction
    result = firstNum - secondNum;

    // Display the result
    printf("Result: %d - %d = %d\n", firstNum, secondNum, result);

    return 0;
}
