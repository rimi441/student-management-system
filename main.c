/*
 * PROJECT: STUDENT MANAGEMENT SYSTEM
 * TEAM: Abhigya Tripathi - B2655R101A1106
 *       Ravi Soni - B2655R101A1117
 * COURSE: B.Tech CSE (AIML) - B2 Batch, 1st Semester
 */

#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int count = 0;

    // Pehle se 3 Student Add karke rakhe hai - taaki Run karte hi Output aaye
    s[0].roll = 101; strcpy(s[0].name, "Abhigya_Tripathi"); s[0].marks = 85.50; count++;
    s[1].roll = 102; strcpy(s[1].name, "Ravi_Soni"); s[1].marks = 90.00; count++;
    s[2].roll = 103; strcpy(s[2].name, "Aarav_Sharma"); s[2].marks = 78.25; count++;

    printf("===== STUDENT MANAGEMENT SYSTEM =====\n");
    printf("Project By: Abhigya Tripathi & Ravi Soni\n\n");

    // 1. Display All
    printf("--- 1. Display All Students ---\n");
    for(int i=0; i<count; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    // 2. Search Student
    printf("\n--- 2. Search Student (Roll No: 102) ---\n");
    int searchRoll = 102;
    for(int i=0; i<count; i++) {
        if(s[i].roll == searchRoll) {
            printf("Found! Roll: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
        }
    }

    // 3. Update Student
    printf("\n--- 3. Update Student (Roll No: 103) ---\n");
    for(int i=0; i<count; i++) {
        if(s[i].roll == 103) {
            s[i].marks = 88.00;
            printf("Updated! Roll: %d | Name: %s | New Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
        }
    }

    // 4. Delete Student
    printf("\n--- 4. Delete Student (Roll No: 101) ---\n");
    int delRoll = 101;
    for(int i=0; i<count; i++) {
        if(s[i].roll == delRoll) {
            for(int j=i; j<count-1; j++) s[j] = s[j+1];
            count--;
            printf("Student with Roll No %d Deleted Successfully!\n", delRoll);
            break;
        }
    }

    // 5. Final List after Delete
    printf("\n--- 5. Final List After Delete ---\n");
    for(int i=0; i<count; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    printf("\nThank You! Project by Abhigya & Ravi\n");
    return 0;
}
