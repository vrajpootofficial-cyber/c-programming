#include <stdio.h>
void swap(int *a, int *b);

int main() {
    int num1, num2;
    
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);
    
    
    swap(&num1, &num2);
    
    
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);
    
    return 0;
}


void swap(int *a, int *b) {
    int temp;
    
    
    temp = *a;   
    *a = *b;     
    *b = temp;   
}
//Enter first number: 6
//Enter second number: 7 

//Before swapping:
//First number = 6
//Second number = 7

//After swapping:
//First number = 7
//Second number = 6