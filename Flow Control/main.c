#include <stdio.h>
#include <stdlib.h>

int a, b, q, r;


int main()
{
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
if (b == 0){
        printf("DIVISION BY ZERO");
} else {
    q = a/b;
    r = a%b;
    printf("A divided by B is: %d\n",q);
    printf("\n");
    printf("and the remainder is: %d",r);
    printf("\n");
}


}
