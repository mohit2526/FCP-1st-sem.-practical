#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter the first string:");
    scanf("%s",a);
    printf("Enter the second string:");
    scanf("%s",b);
    strcat(a,b);
    printf("The concatenated string is:%s",strcat(a,b));
}
    