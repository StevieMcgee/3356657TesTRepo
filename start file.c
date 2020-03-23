#include <stdlib.h>
#include <stdio.h>

char application;
int y;
int x;
int z;

int main() {
printf("Enter an operator (+, -, *, /): ");
scanf("%c", &application);

switch (application){

case '-':
    subtraction();
    return;

case '*':
    multiplication();
    return;

case '/':
    division();
    return;

case '+':
    addition();
    return;

case 'c':
    main();
    return;
 }
}
int addition() {

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n");
    printf("Enter another number: ");
    scanf("%d", &y);

    printf("\n");
    z = x + y;
    printf("the number you entered is: %d\n ", z);
    return;

}

int subtraction() {

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n");
    printf("Enter another number: ");
    scanf("%d", &y);

    printf("\n");
    z = x - y;
    printf("the number you entered is: %d\n ", z);
    return;
}

int division() {

    printf("Enter a number: ");
            scanf("%d", &x);

    printf("\n");
    printf("Enter another number: ");
    scanf("%d", &y);

    printf("\n");
    z = x / y;
    printf("the number you entered is: %d\n ", z);
    return;
}

int multiplication() {

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n");
    printf("Enter another number: ");
    scanf("%d", &y);

    printf("\n");
    z = x * y;
    printf("the number you entered is: %d\n ", z);
    return;
}



