#include <stdio.h>

int main()
{
    int worked_days;

    printf("Enter the days you will work: ");
    scanf("%d", &worked_days);

    float wage = (30 * 0.92) * worked_days;

    printf("You will be paid the amount of R$ %.2f", wage);
}