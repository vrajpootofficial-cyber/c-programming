#include <stdio.h>

void printLetter(char ch) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (ch == 'V') {
                if ((j == 0 && i < 4) || (j == 4 && i < 4) || (i == 4 && j == 2) || (i == 3 && (j == 1 || j == 3)))
                    printf("*");
                else printf(" ");
            }
            else if (ch == 'A') {
                if ((i == 0 && j > 0 && j < 4) || (i == 2) || (j == 0 && i > 0) || (j == 4 && i > 0))
                    printf("*");
                else printf(" ");
            }
            else if (ch == 'I') {
                if (i == 0 || i == 4 || j == 2)
                    printf("*");
                else printf(" ");
            }
            else if (ch == 'B') {
                if (j == 0 || (i == 0 && j < 4) || (i == 2 && j < 4) || (i == 4 && j < 4) || (j == 4 && i != 0 && i != 2 && i != 4))
                    printf("*");
                else printf(" ");
            }
            else if (ch == 'H') {
                if (j == 0 || j == 4 || i == 2)
                    printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    char name[] = "VAIBHAV";
    int k;

    for (k = 0; name[k] != '\0'; k++) {
        printf("\nPattern for %c:\n", name[k]);
        printLetter(name[k]);
    }

    return 0;
}
//Pattern for V:
//*   *
/*   *
*   *
** **
  *  

Pattern for A:
 *** 
*   *
*****
*   *
*   *

Pattern for I:
*****
  *  
  *  
  *  
*****

Pattern for B:
****
*   *
****
*   *
**** 

Pattern for H:
*   *
*   *
*****
*   *
*   *

Pattern for A:
 ***
*   *
*****
*   *
*   *

Pattern for V:
*   *
*   *
*   *
** **
  */