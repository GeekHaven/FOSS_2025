#include <stdio.h>

int num;
printf("Input the initital Number.\n");
scanf("%d",num);
int d1,d2,d3;
printf("Input the digits");
scanf("%d %d %d",d1 ,d2, d3);
int d = power(d1,3)+ power(d2,3)+ power(d3,3);
if(d == num)
{
    printf("The number is an armstrong number");
}
else
{
    printf("This number is not an armstrong number");
}