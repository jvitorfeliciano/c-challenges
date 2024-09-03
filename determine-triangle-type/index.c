#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float a, b, c;

    printf("Enter first side: ");
    scanf("%f", &a);

    printf("Enter second side: ");
    scanf("%f", &b);

    printf("Enter third side: ");
    scanf("%f", &c);

    int isTriangle = a + b > c && c + b > a && a + c > b; // condition to determine the existence of a triangle

    if (isTriangle)
    {
        if (a == b && b == c)
            printf("Equilátero");
        else if (a != b && b != c && a != c)
            printf("Escaleno");
        else
            printf("Isósceles");
    }

    else
    {
        printf("Não é possível formar um triângulo");
    }
}