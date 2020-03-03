#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x1,x2,x3,x4;
float s;
float mean;

int main()
{
printf("enter numbers for variation equation: \n ");
scanf("%f %f %f %f", &x1, &x2, &x3, &x4);

    s = (x1 + x2 + x3 + x4) * 1/4;


printf("the mean of the four numbers is: %0.1f\n", s);
    s = (pow((x1-s), 2) + pow((x2-s), 2) + pow((x3-s), 2) + pow((x4-s), 2)) *1/3;
printf("The variance of the four numbers is: %0.4f", s);




}
