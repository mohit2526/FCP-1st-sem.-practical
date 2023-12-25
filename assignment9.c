//linear search in array
#include<stdio.h>
int main()
{
    int matrix[10];
    int search,n;
     int flag=0;

    // enter the elements in the array.
    printf("Enter the elements in the matrix.\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&matrix[i]);
    }

    printf("Enter the number to search for:\n");
    scanf("%d",&search);
     
    

     for(int i=0;i<5;i++)
     {
        if(matrix[i]==search)
        {
            flag=1;
            n=i;
            break;

        }

     }

     if(flag==1)
     {
        printf("The element is present at position:%d\n",(n+1));

     }
     else
     {
       printf("The element is not present in the matrix.");
     }
     return 0;
}