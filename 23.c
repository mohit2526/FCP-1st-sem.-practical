#include<stdio.h>
void main()
{
    int a[3]={1,2,4};
    int sum=0;
    for(int i=0;i<=2;i++){
        sum=sum+a[i];
        
    }
    printf("%d",sum);
}