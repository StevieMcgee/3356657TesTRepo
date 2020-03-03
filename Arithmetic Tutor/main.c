#include <stdio.h>
#include <stdlib.h>

int  maximum;
int a, b, c, d;
int counter = 0;
char application;

int main(){
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

    while (c == d){

    printf("Designate a number as maximum\n");
    scanf("%d", &maximum);
    a = rand() % maximum + 1;
    b = rand() % maximum + 1;
    c = a + b;
    printf("What is a + b? \n");
    scanf("%d", &d);

    if (c == d){

    printf("Correct\n");
    printf("\n");
    counter += 1;

} else{
    printf("Incorrect!!! the correct answer is %d\n", c);
    printf("The Number of correct answers is: %d\n", counter);
    }
}

}

int subtraction() {

    while (c == d){

    printf("Designate a number as maximum\n");
    scanf("%d", &maximum);
    a = rand() % maximum + 1;
    b = rand() % maximum + 1;
    c = a - b;
    printf("What is a + b? \n");
    scanf("%d", &d);

    if (c == d){

    printf("Correct\n");
    printf("\n");
    counter += 1;

} else{
    printf("Incorrect!!! the correct answer is %d\n", c);
    printf("The Number of correct answers is: %d\n", counter);
    }
}
}

int division() {

    while (c == d){

    printf("Designate a number as maximum\n");
    scanf("%d", &maximum);
    a = rand() % maximum + 1;
    b = rand() % maximum + 1;
    c = a / b;
    printf("What is a + b? \n");
    scanf("%d", &d);

    if (c == d){

    printf("Correct\n");
    printf("\n");
    counter += 1;

} else{
    printf("Incorrect!!! the correct answer is %d\n", c);
    printf("The Number of correct answers is: %d\n", counter);
    }
}
}

int multiplication() {

    while (c == d){

    printf("Designate a number as maximum\n");
    scanf("%d", &maximum);
    a = rand() % maximum + 1;
    b = rand() % maximum + 1;
    c = a * b;
    printf("What is a + b? \n");
    scanf("%d", &d);

    if (c == d){

    printf("Correct\n");
    printf("\n");
    counter += 1;

} else{
    printf("Incorrect!!! the correct answer is %d\n", c);
    printf("The Number of correct answers is: %d\n", counter);
    }
}
}

