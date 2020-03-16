#include <stdio.h>
#include <stdlib.h>

//imaginary numbers
float x0 = -2;
float y0 = 1;
//real numbers
float x = 0;
float y = 0;
float xTemp;

int i;
// the maximum amount of time it runs
float Iteration = 0;
float maxIteration = 1000;


int main()
{
 // giving the y bounds
while (y0 > -1){
    x0 = -2;

    while( x0< 2 && Iteration <= maxIteration){

        x = 0;
        y = 0;
// actual mandlebrot set calculations.
    for (i = 0; i<= maxIteration && (x*x + y*y) <= 2*2; i++){
        xTemp = x*x - y*y + x0;
        y = 2*x*y + y0;
        x = xTemp;

        }
// if inside mandlebrot set print ## otherwise print two spaces
        if (x*x + y*y <=2*2)
        {
            printf("##");
        }
        else
        {
            printf("  ");
        }
        x0 += 0.05;
    }
        printf("\n");
        y0 -= 0.05;
    }
    if(x*x + y*y > 2*2){
        printf("Is in the MandleBrot Set");
        printf("\n");
    }

    return 0;
}
