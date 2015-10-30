/*LAB 1 Q3 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 19th September 2014

Purpose:Using a while loop accept 10 integers and adding cumulative sum of integers entered terminate if '0' is entered.
------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum=0;

    printf("Enter 10 integers:\n");

       while(i!=0)

        {

       scanf("%d",&i);

       sum = sum+i;
       printf("The sum is = %d\n",sum);
        }


    return 0;
}
