  
#include<stdio.h>
int main() {
    double first, second, temp, total, diff;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    // Value of first is assigned to temp
    temp = first;

    // Value of second is assigned to first
    first = second;

    // Value of temp (initial value of first) is assigned to second
    second = temp;

    // Total of first and second
    total = first + second;

    // Difference of first and second
    diff = first - second;

    printf("\nAfter swapping, firstNumber = %.2lf \n", first);
    printf("After swapping, secondNumber = %.2lf \n", second);
    printf("The total of these two numbers is %.2lf \n", total);
    printf("The difference of these two numbers is %.2lf \n\n", diff);
    return 0;
}