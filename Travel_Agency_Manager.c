// C Language Travel Agency Manager.
// Exercise 7.

// Travel Agency Manager.

#include <stdio.h>
#include <stdlib.h>

struct Driver
{
    char name[34];
    int dlno[45];
    int route[47];
    int kms;
};

int main()
{
    struct Driver d1,d2,d3;
    printf("Enter the details of the Driver No 1\n");
    printf("\n");

    printf("Enter the name of first driver\n");
    scanf("%s", &d1.name);
    printf("Enter the dlno of first driver\n");
    scanf("%d", &d1.dlno);
    printf("Enter the route of first driver\n");
    scanf("%d", &d1.route);
    printf("Enter the number of kms of first driver\n");
    scanf("%d", &d1.kms);
    printf("\n");


    printf("Enter the details of the Driver No 2\n");
    printf("\n");
    printf("Enter the name of Second driver\n");
    scanf("%s", &d2.name);
    printf("Enter the dlno of Second driver\n");
    scanf("%d", &d2.dlno);
    printf("Enter the route of Second driver\n");
    scanf("%d", &d2.route);
    printf("Enter the number of kms of Second driver\n");
    scanf("%d", &d2.kms);
    printf("\n");


    printf("Enter the details of the Driver No 3\n");
    printf("\n");
    printf("Enter the name of Third driver\n");
    scanf("%s", &d3.name);
    printf("Enter the dlno of Third driver\n");
    scanf("%d", &d3.dlno);
    printf("Enter the route of Third driver\n");
    scanf("%d", &d3.route);
    printf("Enter the number of kms of Third driver\n");
    scanf("%d", &d3.kms);
    printf("\n");


    printf("********************** Printing Information of these drivers ******************************\n");
    printf("\n");
    printf("For Driver No.1:\n Name is %s",d1.name);
    printf("DL Number is %d\n",d1.dlno);
    printf("Route is %d\n",d1.route);
    printf("Kms is %d\n",d1.kms);

    printf("For Driver No.2:\n Name is %s",d2.name);
    printf("DL Number is %d\n",d2.dlno);
    printf("Route is %d\n",d2.route);
    printf("Kms is %d\n",d2.kms);

    printf("For Driver No.3:\n Name is %s",d3.name);
    printf("DL Number is %d\n",d3.dlno);
    printf("Route is %d\n",d3.route);
    printf("Kms is %d\n",d3.kms);

return 0;
}