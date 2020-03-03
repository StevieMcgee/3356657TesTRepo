#include <stdio.h>
#include <stdlib.h>

int countTotal = 0;
int countInside = 0;
float a, b;
float pi;
double Max = 100000;
int main()
{
    while (countTotal < Max){
        a = (float)rand() /RAND_MAX * 1;
        b = (float)rand() /RAND_MAX * 1;
        countTotal += 1.0;
        if ((a*a + b*b) < 1.0){
            countInside = countInside + 1;
        }
    }
        pi = 4.0*countInside/countTotal;

        printf("Pi = %f", pi);

}
