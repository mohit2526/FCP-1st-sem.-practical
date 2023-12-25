 //compute nCr using functions
#include<stdio.h>

int factorial(int num);

int factorial(int num)
{
    
    int fact=1;
    
    for(int i=1;i<=num;i++)
    {
      fact=fact*i;
    }
    return fact;
}


int main()
{
    int n,r;
    printf("Enter the value of n,r\n");
    scanf("%d,%d",&n,&r);
    int combination=factorial(n)/(factorial(r)*factorial(n-r));
    printf("The computed nCr is :%d\n",combination);

    return 0;

}