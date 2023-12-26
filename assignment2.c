#include<stdio.h>
int main()
{
    int m,n;
    int i,j;
     printf("Enter the number of rows and columns:");
    scanf("%d,%d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the elements of matrix B:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&c[i][j]);
        }
        printf("\n");
    }

    return 0;
}