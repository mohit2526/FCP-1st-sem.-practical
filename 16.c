#include<stdio.h>
int main()
{
    int p,r,t;
    int si;
    printf("Enter the principal amount,rate and time:");
    scanf("%d,%d,%d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("The simple interest is:%d",si);
    return 0;
}