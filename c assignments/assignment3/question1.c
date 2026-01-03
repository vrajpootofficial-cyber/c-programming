#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for (ch = 'A'; ch <= 'Z'; ch++) {
        

        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (ch == 'A') {
                    if (i == 0 && j > 0 && j < 4) printf("*");
                    else if (i > 0 && (j == 0 || j == 4)) printf("*");
                    else if (i == 2) printf("*");
                    else printf(" ");
                }
                else if (ch == 'B') {
                    if (j == 0) printf("*");
                    else if ((i == 0 || i == 2 || i == 4) && j < 4) printf("*");
                    else if (j == 4 && i != 0 && i != 2 && i != 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'C') {
                    if ((i == 0 || i == 4) && j > 0) printf("*");
                    else if (j == 0 && i > 0 && i < 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'D') {
                    if (j == 0) printf("*");
                    else if ((i == 0 || i == 4) && j < 4) printf("*");
                    else if (j == 4 && i > 0 && i < 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'E') {
                    if (i == 0 || i == 2 || i == 4) printf("*");
                    else if (j == 0) printf("*");
                    else printf(" ");
                }
                else if (ch == 'F') {
                    if (i == 0 || i == 2) printf("*");
                    else if (j == 0) printf("*");
                    else printf(" ");
                }
                else if (ch == 'G') {
                    if (i == 0 && j > 0) printf("*");
                    else if (i == 4 && j > 0) printf("*");
                    else if (j == 0 && i > 0 && i < 4) printf("*");
                    else if (i == 2 && j >= 2) printf("*");
                    else if (j == 4 && i >= 2 && i < 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'H') {
                    if (j == 0 || j == 4) printf("*");
                    else if (i == 2) printf("*");
                    else printf(" ");
                }
                else if (ch == 'I') {
                    if (i == 0 || i == 4) printf("*");
                    else if (j == 2) printf("*");
                    else printf(" ");
                }
                else if (ch == 'J') {
                    if (i == 0) printf("*");
                    else if (j == 2 && i < 4) printf("*");
                    else if (i == 4 && j < 2) printf("*");
                    else if (j == 0 && i == 3) printf("*");
                    else printf(" ");
                }
                else if (ch == 'K') {
                    if (j == 0) printf("*");
                    else if (i + j == 4) printf("*");
                    else if (i - j == 0 && i > 1) printf("*");
                    else printf(" ");
                }
                else if (ch == 'L') {
                    if (j == 0) printf("*");
                    else if (i == 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'M') {
                    if (j == 0 || j == 4) printf("*");
                    else if (i == j && i < 3) printf("*");
                    else if (i + j == 4 && i < 3) printf("*");
                    else printf(" ");
                }
                else if (ch == 'N') {
                    if (j == 0 || j == 4) printf("*");
                    else if (i == j) printf("*");
                    else printf(" ");
                }
                else if (ch == 'O') {
                    if ((i == 0 || i == 4) && j > 0 && j < 4) printf("*");
                    else if ((j == 0 || j == 4) && i > 0 && i < 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'P') {
                    if (j == 0) printf("*");
                    else if ((i == 0 || i == 2) && j < 4) printf("*");
                    else if (j == 4 && i == 1) printf("*");
                    else printf(" ");
                }
                else if (ch == 'Q') {
                    if ((i == 0 || i == 4) && j > 0 && j < 4) printf("*");
                    else if ((j == 0 || j == 4) && i > 0 && i < 4) printf("*");
                    else if (i == j && i > 2) printf("*");
                    else printf(" ");
                }
                else if (ch == 'R') {
                    if (j == 0) printf("*");
                    else if ((i == 0 || i == 2) && j < 4) printf("*");
                    else if (j == 4 && i == 1) printf("*");
                    else if (i - j == 1 && i > 1) printf("*");
                    else printf(" ");
                }
                else if (ch == 'S') {
                    if (i == 0 || i == 2 || i == 4) printf("*");
                    else if (i == 1 && j == 0) printf("*");
                    else if (i == 3 && j == 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'T') {
                    if (i == 0) printf("*");
                    else if (j == 2) printf("*");
                    else printf(" ");
                }
                else if (ch == 'U') {
                    if ((j == 0 || j == 4) && i < 4) printf("*");
                    else if (i == 4 && j > 0 && j < 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'V') {
                    if ((j == 0 || j == 4) && i < 3) printf("*");
                    else if (i == 3 && (j == 1 || j == 3)) printf("*");
                    else if (i == 4 && j == 2) printf("*");
                    else printf(" ");
                }
                else if (ch == 'W') {
                    if (j == 0 || j == 4) printf("*");
                    else if (i == j && i > 2) printf("*");
                    else if (i + j == 4 && i > 2) printf("*");
                    else printf(" ");
                }
                else if (ch == 'X') {
                    if (i == j || i + j == 4) printf("*");
                    else printf(" ");
                }
                else if (ch == 'Y') {
                    if (i == j && i < 3) printf("*");
                    else if (i + j == 4 && i < 3) printf("*");
                    else if (j == 2 && i > 2) printf("*");
                    else printf(" ");
                }
                else if (ch == 'Z') {
                    if (i == 0 || i == 4) printf("*");
                    else if (i + j == 4) printf("*");
                    else printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
/*
 *** 
*   *
*****
*   *
*   *
*/

/*
**** 
*   *
**** 
*   *
**** 
*/

/*
 ****
*    
*    
*    
 ****
*/

/*
****
*   *
*   *
*   *
****
*/

/*
*****
*
*****
*
*****
*/

/*
*****
*
*****
*
*
*/

/*
 ****
*    
* ***
*   *
 ****
*/

/*
*   *
*   *
*****
*   *
*   *
*/

/*
*****
  *
  *
  *
*****
*/

/*
*****
  *
  *
* *
**
*/

/*
*   *
*  *
* *
** *
*   *
*/

/*
*
*
*
*
*****
*/

/*
*   *
** **
* * *
*   *
*   *
*/

/*
*   *
**  *
* * *
*  **
*   *
*/

/*
 ***
*   *
*   *
*   *
 ***
*/

/*
****
*   *
****
*
*
*/

/*
 ***
*   *
*   *
*  **
 ****
*/

/*
****
*   *
****
* *
*  *
*/

/*
*****
*
*****
    *
*****
*/

/*
*****
  *
  *
  *
  *
*/

/*
*   *
*   *
*   *
*   *
 ***
*/

/*
*   *
*   *
*   *
 * *
  *
*/

/*
*   *
*   *
*   *
** **
*   *
*/

/*
*   *
 * *
  *
 * *
*   *
*/

/*
*   *
 * *
  *
  *
  *  
*/

/*
*****
   *
  *
 *
*****
*/