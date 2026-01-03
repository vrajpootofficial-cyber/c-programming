#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_SUBJECTS 3

struct Student {
    int rollNumber;
    char name[50];
    float marks[MAX_SUBJECTS];
    float total;
    float percentage;
    char grade;
};

void inputStudentData(struct Student s[], int n);
void calculateResults(struct Student s[], int n);
void generateRankList(struct Student s[], int n);
void findToppers(struct Student s[], int n);
void displayMarksheet(struct Student s[], int n);
char calculateGrade(float percentage);

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    printf("=== Result Management System ===\n");
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &count);

    inputStudentData(students, count);
    calculateResults(students, count);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Generate Rank List (Class Standing)\n");
        printf("2. View Subject Toppers\n");
        printf("3. View Individual Marksheet\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                generateRankList(students, count);
                break;
            case 2:
                findToppers(students, count);
                break;
            case 3:
                displayMarksheet(students, count);
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void inputStudentData(struct Student s[], int n) {
    char *subjects[] = {"Maths", "Web-Tech", "C programming"};
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNumber);
        getchar();
        printf("Name: ");
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0;

        for (int j = 0; j < MAX_SUBJECTS; j++) {
            printf("Marks for %s: ", subjects[j]);
            scanf("%f", &s[i].marks[j]);
        }
    }
}

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 50) return 'D';
    else return 'F';
}

void calculateResults(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        s[i].total = 0;
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / MAX_SUBJECTS;
        s[i].grade = calculateGrade(s[i].percentage);
    }
}

void generateRankList(struct Student s[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].total < s[j + 1].total) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\n=== CLASS RANK LIST ===\n");
    printf("%-5s %-20s %-10s %-10s %-5s\n", "Rank", "Name", "Total", "Percent", "Grade");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-10.2f %-10.2f %-5c\n", 
               i + 1, s[i].name, s[i].total, s[i].percentage, s[i].grade);
    }
}

void findToppers(struct Student s[], int n) {
    char *subjects[] = {"Maths", "Physics", "Chemistry"};
    printf("\n=== SUBJECT TOPPERS ===\n");
    
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        float maxMarks = -1;
        int index = -1;
        
        for (int i = 0; i < n; i++) {
            if (s[i].marks[j] > maxMarks) {
                maxMarks = s[i].marks[j];
                index = i;
            }
        }
        
        if (index != -1) {
            printf("%s Topper: %s (%.2f)\n", subjects[j], s[index].name, maxMarks);
        }
    }
}

void displayMarksheet(struct Student s[], int n) {
    int searchRoll;
    int found = 0;
    char *subjects[] = {"Maths", "Physics", "Chemistry"};

    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for (int i = 0; i < n; i++) {
        if (s[i].rollNumber == searchRoll) {
            found = 1;
            printf("\n--------------------------------\n");
            printf("       RUNGTA UNIVERSITY        \n");
            printf("          MARKSHEET             \n");
            printf("--------------------------------\n");
            printf("Name: %s\n", s[i].name);
            printf("Roll No: %d\n", s[i].rollNumber);
            printf("--------------------------------\n");
            for(int j=0; j<MAX_SUBJECTS; j++) {
                printf("%-15s : %.2f\n", subjects[j], s[i].marks[j]);
            }
            printf("--------------------------------\n");
            printf("Total: %.2f / %.2f\n", s[i].total, (float)(MAX_SUBJECTS * 100));
            printf("Percentage: %.2f%%\n", s[i].percentage);
            printf("Final Grade: %c\n", s[i].grade);
            printf("--------------------------------\n");
            break;
        }
    }
    if (!found) {
        printf("Student with Roll Number %d not found.\n", searchRoll);
    }
}
//=== Result Management System ===
//Enter the number of students (max 50): 5

//Enter details for Student 1:
//Roll Number: 100
//Name: vaibhav
//Marks for Maths: 99
//Marks for Web-Tech: 97
//Marks for C programming: 96

//Enter details for Student 2:
//Roll Number: 101
//Name: shikha
//Marks for Maths: 89
//Marks for Web-Tech: 87
//Marks for C programming: 99

//Enter details for Student 3:
//Roll Number: 102
//Name: ujjwal
//Marks for Maths: 34
//Marks for Web-Tech: 34
//Marks for C programming: 34

//Enter details for Student 4:
//Roll Number: 103
//Name: yana
//Marks for Maths: 84
//Marks for Web-Tech: 85
//Marks for C programming: 86

//Enter details for Student 5:
//Roll Number: 104
//Name: sourav
//Marks for Maths: 50
//Marks for Web-Tech: 50
//Marks for C programming: 50

//--- MENU ---
//1. Generate Rank List (Class Standing)
//2. View Subject Toppers
//3. View Individual Marksheet
//4. Exit
//Enter choice: 1

/*=== CLASS RANK LIST ===
Rank  Name                 Total      Percent    Grade
----------------------------------------------------------
1     vaibhav              292.00     97.33      A
2     shikha               275.00     91.67      A
3     yana                 255.00     85.00      B
4     sourav               150.00     50.00      D
5     ujjwal               102.00     34.00      F

--- MENU ---
1. Generate Rank List (Class Standing)
2. View Subject Toppers
3. View Individual Marksheet
4. Exit
Enter choice: 2

=== SUBJECT TOPPERS ===
Maths Topper: vaibhav (99.00)
Physics Topper: vaibhav (97.00)
Chemistry Topper: shikha (99.00)

--- MENU ---
1. Generate Rank List (Class Standing)
2. View Subject Toppers
3. View Individual Marksheet
4. Exit
Enter choice: 3
Enter Roll Number to search: 103

--------------------------------
       RUNGTA UNIVERSITY
          MARKSHEET
--------------------------------
Name: yana
Roll No: 103
--------------------------------
Maths           : 84.00
Physics         : 85.00
Chemistry       : 86.00
--------------------------------
Total: 255.00 / 300.00
Percentage: 85.00%
Final Grade: B
--------------------------------

--- MENU ---
1. Generate Rank List (Class Standing)
2. View Subject Toppers
3. View Individual Marksheet
4. Exit
Enter choice: 4
Exiting system*/