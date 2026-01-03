#include <stdio.h>
int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s",&name);
    float Basic_Salary,HRA,DA,GS,IT,Net_Salary;
    printf("Enter Basic Salary: ");
    scanf("%f",&Basic_Salary);

    HRA = 0.2*Basic_Salary;
    DA = 0.1*Basic_Salary;
    GS = Basic_Salary + HRA + DA;
    IT = GS*0.05;
    Net_Salary = GS-IT;

    printf("Empolyee Name    :%s\n", name);
    printf("Basic Salary     :%.2f\n", Basic_Salary);
    printf("House Rent Allow :%.2f\n", HRA);
    printf("Dearness Allow   :%.2f\n", DA);
    printf("Gross Salary     :%.2f\n", GS);
    printf("Income Tax       :%.2f\n", IT);
    printf("Net Salary       :%.2f\n", Net_Salary);
    return 0;
}
// OUTPUT
// Enter your name: Harshita
// Enter Basic Salary: 20000
// Empolyee Name    :Harshita
// Basic Salary     :20000.00
// House Rent Allow :4000.00
// Dearness Allow   :2000.00
// Gross Salary     :26000.00
// Income Tax       :1300.00
// Net Salary       :24700.00