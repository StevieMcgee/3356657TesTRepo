#include <stdio.h>
#include <stdlib.h>

float x;
float n;
int F;



int main()
{
    printf("enter a number to calculate its square root: ");
    scanf("%f", &x);

    n = x/2;

while (F < 11){

    n = (n + x/n)/2;
    printf("the approximation is: %0.4f\n", n);
    F++;
}

}
