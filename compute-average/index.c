#include <stdio.h>

int main()
{
    float assignment_grade, exam_grade;

    printf("assignment grade: ");
    scanf("%f", &assignment_grade);

    printf("exam grande: ");
    scanf("%f", &exam_grade);

    float final_average = (exam_grade * 0.6) + (assignment_grade * 0.4);

    printf("Your final average was, %.2f", final_average);
}