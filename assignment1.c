//matrix addition
#include<stdio.h>
int main()
{
    int matrix_1[5][5];
    int matrix_2[5][5];
    // entering the elements in the matrix 1
   printf("Enter elements of the matrix\n");
   for (int i= 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
         scanf("%d", &matrix_1[i][j]);
   }
// entering the elements in the matrix 2

printf("Enter elements of the matrix\n");
   for (int i= 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
         scanf("%d", &matrix_2[i][j]);
   }

   //addition of the matrices
   int sum_matrix[5][5];
   for (int i= 0; i < 2; i++)
   {
   
      for (int j = 0; j < 2; j++)
         {
             sum_matrix[i][j]=matrix_1[i][j]+matrix_2[i][j];

         }
   }

   //displaying the sum matrix
   for (int i= 0; i < 2; i++)
   {
   
      for (int j = 0; j < 2; j++)
         {
            printf( "%d\t",sum_matrix[i][j]);

         }
         printf("\n");
   }
   return 0;
}