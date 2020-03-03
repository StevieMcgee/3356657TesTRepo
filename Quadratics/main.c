#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c, D;
float x1, x2;
float N;



int main()
{
    printf("enter the quadratic coefficients: \n");
    scanf("%f %f %f", &a, &b, &c);
    D = (b*b) - 4.0*a*c;
    if(D < 0){
        N = 0;
        printf("The number of solutions is: %0.0f", N);
    } else if (D == 0){
        N = 2;
        printf("The number of solutions is: %0.0f", N);
    } else if (D > 0){
        N = 2;
        x1 = (-b + sqrt(D))/2.0*a;
        x2 = (-b - sqrt(D))/2.0*a;
        printf("The number of solutions is: %0.0f and they are %0.1f and %0.1f", N,x1,x2);
    }

}
