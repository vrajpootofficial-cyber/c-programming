#include <stdio.h>
int main(){
    int a = 5;
    printf("Size of a=%d\n",sizeof (a));
    float b = 3.14;
    printf("Size of b=%d\n",sizeof (b));
    char c = '$';
    printf("Size of c=%d\n",sizeof (c));
    double d = 123.5463877894;
    printf("Size of d=%d",sizeof (d));
  return 0;
}
// OUTPUT
// Size of a=4
// Size of b=4
// Size of c=1
// Size of d=8