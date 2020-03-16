#include <stdio.h>
#include <stdlib.h>

int xA = 15;
int xTemp = 7;
int Diff;
int Q = 1;
int Sum;
int NthTerm = 4;

int main()
{
    Sum = xTemp;
// calculate the difference
    Diff = xA - xTemp;
    printf("Difference is: %d\n", Diff);
// while loop to clculate and print the series
while(Q < 11) {
    xA = xTemp + Diff;
    printf("Iteration:%d,   Number in Sequence:%d \n", Q, xA);
// changing xn to Xn-1
    xTemp = xA;
    Sum = Sum + xA;
    printf("Sum of Arithmetic Series = : %d\n", Sum);
    Q++;



    }

    return 0;
}
