#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of the first number:");
    scanf("%d",&a);
    printf("Enter the value of the second number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d\n",a);
    printf("%d\n",b);

    
}
//With a third variable