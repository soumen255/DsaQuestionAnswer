#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks[5];  // Assuming 5 subjects
    float average;
};

// Function to calculate the average marks of a student
void calculate_average(struct Student *stu, int subjects) {
    float total = 0;
    for (int i = 0; i < subjects; i++) {
        total += stu->marks[i];
    }
    stu->average = total / subjects;
}

int main() {
    int n, subjects = 5;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter name: ");
        getchar(); // Consume newline character left in buffer
        fgets(students[i].name, sizeof(students[i].name), stdin);
       

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks for %d subjects:\n", subjects);
        for (int j = 0; j < subjects; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }

        // Calculate average marks
        calculate_average(&students[i], subjects);
    }

    // Display eligible students
    printf("\nEligible Students for Training (Average Marks > 75):\n");
    printf("-----------------------------------------------------\n");
    printf("Name                | Roll No | Average Marks\n");
    printf("-----------------------------------------------------\n");

    int eligible_count = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].average > 75) {
            eligible_count++;
            printf("%-20s | %-7d | %-12.2f\n", 
                   students[i].name, students[i].roll_no, students[i].average);
        }
    }

    if (eligible_count == 0) {
        printf("No students are eligible for training.\n");
    }

    return 0;
}
