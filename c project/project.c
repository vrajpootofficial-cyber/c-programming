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

int inputStudentData(struct Student s[], int n);
int calculateResults(struct Student s[], int n);
int generateRankList(struct Student s[], int n);
int findToppers(struct Student s[], int n);
int displayMarksheet(struct Student s[], int n);
char calculateGrade(float percentage);

int main() {
    struct Student students[MAX_STUDENTS];
    int count, choice;

    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &count);

    inputStudentData(students, count);
    calculateResults(students, count);

    do {
        printf("\n1. Generate Rank List\n");
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
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}

int inputStudentData(struct Student s[], int n) {
    char *subjects[] = {"Maths", "Web-Tech", "C Programming"};
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNumber);
        getchar();
        printf("Name: ");
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0;

        for (int j = 0; j < MAX_SUBJECTS; j++) {
            printf("%s: ", subjects[j]);
            scanf("%f", &s[i].marks[j]);
        }
    }
    return 0;
}

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 50) return 'D';
    else return 'F';
}

int calculateResults(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        s[i].total = 0;
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / MAX_SUBJECTS;
        s[i].grade = calculateGrade(s[i].percentage);
    }
    return 0;
}

int generateRankList(struct Student s[], int n) {
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

    printf("\n%-5s %-20s %-10s %-10s %-5s\n", "Rank", "Name", "Total", "Percent", "Grade");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-10.2f %-10.2f %-5c\n", 
               i + 1, s[i].name, s[i].total, s[i].percentage, s[i].grade);
    }
    return 0;
}

int findToppers(struct Student s[], int n) {
    char *subjects[] = {"Maths", "Web-Tech", "C Programming"};
    
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
    return 0;
}

int displayMarksheet(struct Student s[], int n) {
    int searchRoll, found = 0;
    char *subjects[] = {"Maths", "Web-Tech", "C Programming"};

    printf("Enter Roll Number: ");
    scanf("%d", &searchRoll);

    for (int i = 0; i < n; i++) {
        if (s[i].rollNumber == searchRoll) {
            found = 1;
            printf("\nName: %s\n", s[i].name);
            printf("Roll No: %d\n", s[i].rollNumber);
            for (int j = 0; j < MAX_SUBJECTS; j++) {
                printf("%-15s: %.2f\n", subjects[j], s[i].marks[j]);
            }
            printf("Total: %.2f / %.2f\n", s[i].total, (float)(MAX_SUBJECTS * 100));
            printf("Percentage: %.2f%%\n", s[i].percentage);
            printf("Grade: %c\n", s[i].grade);
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
    return found;
}
/*
Student 1:
Roll Number: 100
Name: vaibhav
Maths: 99
Web-Tech: 97
C Programming: 89

Student 2:
Roll Number: 101
Name: trisha
Maths: 96 
Web-Tech: 94  
C Programming: 93

Student 3:
Roll Number: 102
Name: shikha
Maths: 98
Web-Tech: 97
C Programming: 99

Student 4:
Roll Number: 103
Name: ujjwal
Maths: 34
Web-Tech: 34
C Programming: 34

Student 5:
Roll Number: 105
Name: sourav
Maths: 80
Web-Tech: 80
C Programming: 80

1. Generate Rank List
2. View Subject Toppers
3. View Individual Marksheet
4. Exit
Enter choice: 1

Rank  Name                 Total      Percent    Grade
1     shikha               294.00     98.00      A
2     vaibhav              285.00     95.00      A
3     trisha               283.00     94.33      A
4     sourav               240.00     80.00      B
5     ujjwal               102.00     34.00      F

1. Generate Rank List
2. View Subject Toppers
3. View Individual Marksheet
4. Exit
Enter choice: 2
Maths Topper: vaibhav (99.00)
Web-Tech Topper: shikha (97.00)
C Programming Topper: shikha (99.00)


1. Generate Rank List
2. View Subject Toppers
3. View Individual Marksheet
4. Exit
Enter choice: 3
Enter Roll Number: 100

Name: vaibhav
Roll No: 100
Maths          : 99.00
Web-Tech       : 97.00
C Programming  : 89.00
Total: 285.00 / 300.00
Percentage: 95.00%
Grade: A

1. Generate Rank List
2. View Subject Toppers
3. View Individual Marksheet
4. Exit
Enter choice: 4
Exiting.*/
