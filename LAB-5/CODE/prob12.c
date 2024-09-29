#include <stdio.h>
void main() {
    int attendance, assignment_scores, exam_results, final_marks;
    printf("Enter your attendance(in percentage): ");
    scanf("%d", &attendance);
    printf("\nEnter your assignment score(out of 100): ");
    scanf("%d", &assignment_scores);
    printf("\nEnter your exam results(out of 100): ");
    scanf("%d", &exam_results);
    final_marks = assignment_scores * 0.2 + exam_results * 0.8; 
    if(attendance >= 80) {
        if(final_marks >= 90) {
            printf("\nFinal Grade: A+");
        }else if(final_marks >=85) {
            printf("\nFinal Grade: A");
        }else if(final_marks >=75) {
            printf("\nFinal Grade: B");
        }else if(final_marks >=68) {
            printf("\nFinal Grade: C");
        }else if(final_marks >=60) {
            printf("\nFinal Grade: D");
        }else if(final_marks >=50) {
            printf("\nFinal Grade: E");
        }else {
            printf("\nFinal Grade: F");
        }
    }else {
        printf("\nFinal Grade: F");
    }
}