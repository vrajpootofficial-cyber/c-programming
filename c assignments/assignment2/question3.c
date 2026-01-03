#include <stdio.h>
int main() {
    char username[20], password[20];
    
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if ((strcmp(username, correctUsername) == 0) && (strcmp(password, correctPassword) == 0)) {
        printf("Login Successful.\n");
    } else {
        printf("Invalid Login.\n");
    }
    return 0;
}
// OUTPUT
// Enter username: admin
// Enter password: 1234
// Login Successful.