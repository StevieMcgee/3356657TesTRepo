#include <stdio.h>
#include <stdlib.h>

float x, y;
float x1, y1;
float x2, y2;



int main()
{
    printf("Please enter the first point:\n");
    scanf("%f %f", &x1,&y1);
    printf("Please enter the second points:\n");
    scanf("%f %f", &x2,&y2);
    printf("Please enter the point to be estimated:\n");
    scanf("%f", &x);

    y = (y2 - y1)/(x2-x1);
    y *= (x-x1);
    y += y1;
    printf("The estimation of y at %f is: %f ", x,y);




}
