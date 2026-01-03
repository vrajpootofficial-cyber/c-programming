// 31. Write a C program to find the maximum of two numbers 
//using a function that accepts pointer arguments.
#include <stdio.h>
int findMax(int *a, int *b) {
    if (*a > *b)
        return *a;
    else
        return *b;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Maximum number is %d\n", findMax(&x, &y));
    return 0;
}
// OUTPUT
// Enter two numbers: 56
// 67
// Maximum number is 67