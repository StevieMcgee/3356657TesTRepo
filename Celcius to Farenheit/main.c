#include <stdio.h>
#include <stdlib.h>

float f;
double c;


int main()
{

    printf("Please enter farenheit Temperature: ");
    scanf("%f", &f);
    printf("Entered Farenheit temperature = %0.1f", f);
    c = f - 32;
    c *= 5.0/9.0;
    printf("\n");
    printf("The answer in celcius = %0.2f\n", c);
return 0;

}
