#include <stdio.h>
#include <math.h>

int main(){
    float ca, cb, h;

    printf("Enter the size of the cathet: ");
    scanf("%f %f", &ca, &cb);

    h = hypot(ca, cb);

    printf("The value of the hypotenuse is: %.2f", h);
}