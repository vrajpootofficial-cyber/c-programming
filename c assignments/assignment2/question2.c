#include <stdio.h>
int main(){
    float Account_b1,Account_b2;
    printf("Enter First Account Balance: ");
    scanf("%f", &Account_b1);
    printf("Enter Second Account Balance: ");
    scanf("%f", &Account_b2);
    int is_equal = (Account_b1==Account_b2);
    int first_is_greater = (Account_b1 > Account_b2);
    int second_is_greater = (Account_b2 > Account_b1);

    printf("Both are Equal: %d\n",is_equal);
    printf("First is Greater Balance: %d\n",first_is_greater);
    printf("Second is Greater Balance: %d\n",second_is_greater);
    return 0;
}
// OUTPUT
// Enter First Account Balance: 2000
// Enter Second Account Balance: 2000
// Both are Equal: 1
// First is Greater Balance: 0
// Second is Greater Balance: 0