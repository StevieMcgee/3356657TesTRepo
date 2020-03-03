#include <stdio.h>
#include <stdlib.h>


float x,y,x1,y1,x2,y2;


int main()
{
    printf("Please enter the first points:\n");
    scanf("%f %f", &x1,&y1);
    printf("Please enter the second points:\n");
    scanf("%f %f",&x2,&y2);
    printf("Please enter the point to be estimated:");
    scanf("%f", &x);

    y  = (y2 - y1)/(x2 - x1);
    y *= (x - x1);
    y += y1;
    printf("The estimation of y at %0.2f is: %0.2f ", x,y);



}
