// A C program that calculates the marks a student got in an exam
// Written 02/10/2019
// by Christopher Hatfield (z5278027)

#include <stdio.h>

int main(void) {

    int totalMarks;
    int marksAwarded;
    double studentScore;
    
    printf("Enter the total number of marks in the exam: ");
    scanf("%d", &totalMarks);
    printf("Enter the number of marks the student was awarded: ");
    scanf("%d", &marksAwarded);
    
    studentScore = ((marksAwarded * 1.0) / totalMarks) * 100.0;
    
    printf("The student scored %.0lf%% in this exam.\n", studentScore);
    
    return 0;
    
}

