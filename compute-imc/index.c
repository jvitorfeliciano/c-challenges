#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float weight, height, imc;

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your height: ");
    scanf("%f", &height);

    imc = weight / pow(height, 2);

    if (imc < 18.5)
    {
        printf("Abaixo do peso");
    }
    else if (imc < 25)
    {
        printf("Peso normal");
    }
    else if (imc < 30)
    {
        printf("Acima do peso");
    }
    else
    {
        printf("Obeso");
    }
}