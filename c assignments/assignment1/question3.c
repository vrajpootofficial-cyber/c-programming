#include <stdio.h>
int main(){
    int x = 10,y = 20;
    printf("PRE-INCREMENT\n");
    printf("Value of x : %d \n",x);
    printf("Value of x : %d \n",++x);
    printf("Value of x : %d \n",x);
    printf("POST-INCREMENT\n");
    printf("Value of y : %d \n",y);
    printf("Value of y : %d \n",y++);
    printf("Value of y : %d \n",y);
    return 0;
    }
//OUTPUT
// PRE-INCREMENT
// Value of x : 10 
// Value of x : 11
// Value of x : 11
// POST-INCREMENT
// Value of y : 20
// Value of y : 20
// Value of y : 21