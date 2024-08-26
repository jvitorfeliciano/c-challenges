#include <stdio.h>

int main(){
    int first_number, second_number;

    printf("Type the first number: ");
    scanf("%d", &first_number);

    printf("Type the second number: ");
    scanf("%d", &second_number);

    float left =  first_number % second_number;
    float quocient = first_number / second_number;

    printf("The left is: %.0f and the quocient is: %.0f \n", left, quocient);

}