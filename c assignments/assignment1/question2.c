//Write a C program that performs addition, subtraction, multiplication,
//and division of two numbers using a function with call by reference.
#include <stdio.h>
void calculate(int *a, int *b, int *add, int *sub, int *mul, float *div) {
    *add = *a + *b;
    *sub = *a - *b;
    *mul = (*a) * (*b);
    if (*b != 0)
        *div = (float)(*a) / (*b);
    else
        *div = 0;
}
int main() {
    int x, y;
    int add, sub, mul;
    float div;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    calculate(&x, &y, &add, &sub, &mul, &div);
    printf("\nAddition = %d", add);
    printf("\nSubtraction = %d", sub);
    printf("\nMultiplication = %d", mul);
    if (y != 0)
        printf("\nDivision = %.2f\n", div);
    else
        printf("\nDivision not possible (division by zero)\n");
    return 0;
}
// OUTPUT
// Enter two numbers: 89
// 80
// Addition = 169
// Subtraction = 9
// Multiplication = 7120
// Division = 1.11