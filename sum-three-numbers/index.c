#include <stdio.h>

int main(){
    int a, b,c;

    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c ;

    printf("The sum is: %d", sum);
}