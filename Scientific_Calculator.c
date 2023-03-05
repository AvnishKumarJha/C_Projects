#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define note "Maze Mat Lo, Enter the Valid Operation!!!"

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()
{
    printf("\n");
    printf(" __________________________________________________________________________");
    printf("\n");
    printf("|\t\tWelcome to the Scientific Calculator!!!\t\t           |");
    printf("\n|__________________________________________________________________________|");
    int choice;
    printf("\n|\t\t******* Press 0 to quit the Program *******                |");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 1                 |for Addition                                     |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 2                 |for Subtraction                                  |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 3                 |for Multiplication                               |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 4                 |for Division                                     |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 5                 |for Modulus                                      |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 6                 |for Power                                        |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 7                 |for Factorial                                    |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 8                 |for Square                                       |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 9                 |for Cube                                         |");
    printf("\n|________________________|_________________________________________________|");
    printf("\n|__________________________________________________________________________|");
    printf("\n|Enter 10                |for squareroot                                   |");
    printf("\n|________________________|_________________________________________________|");

    while (1)
    {
        printf("\n\n\nEnter the Operation you want to do   :- ");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            addition();
            break;

        case 2:
            subtraction();
            break;

        case 3:
            multiplication();
            break;

        case 4:
            division();
            break;

        case 5:
            modulus();
            break;

        case 6:
            power();
            break;

        case 7:
            factorial();
            break;

        case 8:
            square();
            break;

        case 9:
            cube();
            break;

        case 10:
            squareroot();
            break;

        case 0:
            exit(0);

        default:
            printf("\n******* %s ******* \n", note);
            break;
        }
    }
    return 0;
}

void addition()
{
    printf("Enter the Numbers   you want to Add  :- ");
    int a, b;
    scanf(" %d %d", &a, &b);
    printf("The Sum of A and B is                :- %d", a + b);
}

void subtraction()
{
    printf("Enter the Numbers   you want to Subtract  :- ");
    int a, b;
    scanf(" %d %d", &a, &b);
    printf("The Subtraction of A and B is        :- %d", a - b);
}

void multiplication()
{
    printf("Enter the Numbers   you want to Multiply  :- ");
    int a, b;
    scanf(" %d %d", &a, &b);
    printf("The Multiplication of A and B is   :- %d", a * b);
}

void division()
{
    printf("Enter the Numbers   you want to Divide  :- ");
    int a, b;
    scanf(" %d %d", &a, &b);
    printf("The Division of A and B is :- %f\n", (float)a / (float)b);
}

void modulus()
{
    printf("Enter the Numbers   you want to find Modulus of :- ");
    int a, b;
    scanf(" %d %d", &a, &b);
    printf("The Modulus of A and B is :- %d", a % b);
}

void factorial()
{
    int n, factorial;
    printf("Enter the Numbers   you want the Factorial of :- ");
    scanf(" %d", &n);
    factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is :- %d", n, factorial);
}

void power()
{
    double b;
    double p;
    printf("Enter the Base and the Power :- ");
    scanf(" %lf %lf", &b, &p);
    double e = pow(b, p);
    printf("The Power is :- %lf", e);
}

void square()
{
    double b;
    printf("Enter the Number you want the Square of :- ");
    scanf(" %lf", &b);
    double p = pow(b, 2);
    printf("The Square of %lf is :- %lf", b, p);
}

void cube()
{
    double b;
    printf("Enter the Number you want the Cube of :- ");
    scanf(" %lf", &b);
    double p = pow(b, 3);
    printf("The Cube of %lf is :- %lf", b, p);
}

void squareroot()
{
    double b;
    printf("Enter the Number you want the Square root of :- ");
    scanf(" %lf", &b);
    double s = sqrt(b);
    printf("The Square root of %lf is :- %lf", b, s);
}
