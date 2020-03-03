#include <stdio.h>
#include <stdlib.h>

float f;
double c;

int main()
{



printf("Enter Farenheit Temperature: ");
scanf("%f", &f);
printf("Entered farenheit temp = %f", f);
    c = f-32;
    c= c * 5/9;
    printf("\n");
    printf("The answer in celcius = %0.2f\n", c);
return 0;
}
