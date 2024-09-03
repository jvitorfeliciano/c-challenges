#include <stdio.h>

int main()
{
    float dividend, divisor, result;

    printf("Enter the dividend: ");
    scanf("%f", &dividend);

    printf("Enter the divisor: ");
    scanf("%f", &divisor);

    if (divisor == 0)
    {
        printf("Erro");
    }
    else
    {
        result = dividend / divisor;
        printf("O resultado é: %f", result);
    }
}