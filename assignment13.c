#include<stdio.h>
void add(int *x,int *y)
{
    int a=10,b=15;  
    printf("Before function call:a=%d,b=%d",a,b);
    add(&a,&b);
    printf("\nAfter function call:a=%d,b=%d",a,b);

    
}
//void add(int x,int y)

int main(){

int x,y;
    x=x+10;
    y=y+10;
    printf("Inside the fucntion:a=%d,b=%d",x,y);
}