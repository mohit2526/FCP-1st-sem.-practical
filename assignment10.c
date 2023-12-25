#include<stdio.h>

void swap_using_thrid_variable(int n1, int n2); swap_without_third_variable( int n1, int n2) {

  n1 = n1 + n2;

   n2 = n1 - n2;

n1 = n1 - n2;

   printf  ("The swap number is %d%d .", n1, n2);
 }  

int main() {

    int n1, n2;

    printf("Enter the first number : ");
    scanf("%d", &n1);

    printf("Enter the second number : ");
    scanf("%d", &n2);

   swap_using_thrid_variable( n1, n2);

    return 0;

}

void swap_using_thrid_variable(int n1, int n2) {

    int temp;

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf ("The swap number is %d%d .", n1,n2);
    

    }