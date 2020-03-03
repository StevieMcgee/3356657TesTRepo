#include <stdio.h>
#include <stdlib.h>

float counter = 0;
float athreehappened = 0;
float a;
float b;


int main()
{
    while (counter <1001 ){
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        printf("A = %0.0f and B = %0.0f\n", a, b);
        if ( a == 3 || b == 3) {
            athreehappened += 1;
        }
        counter = counter + 1;
    }
        athreehappened = athreehappened/counter;
        printf("the chance of a 3 after 1000 rolls = %f", athreehappened);

}
