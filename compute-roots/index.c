#include <stdio.h>
#include <math.h>

int main()
{
    float number;

    printf("Enter the number: ");
    scanf("%f", &number);

    float square_root = sqrt(number);
    float cubic_root = cbrt(number);
    float fourth_root = pow(number, 0.25);

    printf("The square root is %.2f, the cubic root is %.2f and the fourth root is %.2f", square_root, cubic_root, fourth_root);

    return 0;
}