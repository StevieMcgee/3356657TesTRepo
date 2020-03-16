#include <stdio.h>
#include <stdlib.h>

float x1 = 1;
float x2 = 1;
float b1 = 1;
float b2 = 1;
float xN;
int Q = 1;


int main()
{
    printf("iteration: %d number in sequence: %f\n", Q, x1);
    Q++;
    printf("iteration: %d number in sequence: %f\n", Q,  x2);
    Q++;
while( Q < 11 ){

    xN = b1*x1 + b2*x2;
    printf("iteration: %d Number in sequence: %f\n", Q, xN);
    x2 = x1;
    x1 = xN;


    Q++;
    }
    return 0;
}
