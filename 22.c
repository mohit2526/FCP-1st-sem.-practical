#include<stdio.h>
void main()
{
    int a[5]={1,44,56,33,2};
    int max=a[0];
    for(int i=0;i<=4;i++){
    if(max<a[i]){
        max=a[i];
    }
    }
    printf("%d",max);
}