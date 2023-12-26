#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter a string:");
    scanf("%s",a);
    int i=strlen(a);
    printf("The length of the string is:%d",i);
    return 0;
}