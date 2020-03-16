#include <stdio.h>
#include <stdlib.h>

double xn = 75;
double xnm1 = -2.6;
float k;
int Q = 1;
int n = 2;
double Sum;

int main()
{
    k = xn / xnm1;
    Sum = xn;
if (k > -1 && k < 1){
    printf("This sequence converges as k = %f\n", k);
}else{
    printf("the sequence diverges as k = %d\n", k);
    printf("\n");
while (Q < 101){
    xn = k*xnm1;
    printf("Iteration: %d   Number in sequence: %0.4f \n", Q, xn );


    Sum = Sum + xn;
    printf("Sum of the geometric series = %0.4f\n", Sum);
    printf("\n");

if(abs(xn-xnm1) < 0.0001) {
    break;
}
     xnm1 = xn;
     Q++;

    }
}
    return 0;
}
