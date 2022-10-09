// Electricity Bill Calculator.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int custid,conu;    // custid = customer id, conu = Units Consumed
    float chg, surchg = 0, gramt, netamt;  //chg = charge, surchg = surcharge, gramt = gross amount, netamt = net amount
    char connm[25];

    printf("Input Customer Id: ");
    scanf("%d",&custid);
    printf("Input the name of the customer : ");
    scanf("%s",connm);
    printf("Input the unit consumed by the customer : ");
    scanf("%d",&conu);

    if (conu<200)  //upto 199 units is charged @ 1.20/unit
        chg =1.20;
    else if (conu>=200 && conu<400)  //200>400 units it is charged @ 1.50/unit.
        chg = 1.50;
    else if (conu>=400 && conu<600) //400>600 units it is charged @ 1.80/unit.
        chg = 1.80;
    else  // Above 600 units it is charged @ 2.00/unit.
        chg = 2.00;
        gramt = conu*chg;
    if (gramt>400)  // if gross amount is more than 400, 15% is added to gross amount as surcharge.
        surchg = gramt*15/100;
        netamt=gramt+surchg;
    if (netamt<100)
        netamt=100;

    printf("\nElectricity Bill\n");
    printf("Customer Id NO.                                 :%d\n",custid);
    printf("Customer Name                                   :%s\n",connm);
    printf("Unit Consumed                                   :%d\n",conu);
    printf("Amount Charges @Rs. %f per unit    :%f\n",chg,gramt);
    printf("Surcharge Amount                                :%f\n",surchg);
    printf("Net Amount Paid By the Customer                 :%f\n",netamt);
    
return 0;
}