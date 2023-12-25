//sum of diagonal matrix
#include<stdio.h>

    int digaonal_elements(int matrix[5][5]);

    

    int digaonal_elements(int matrix[5][5])
    {
       int sum=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
        {
            if(i==j)
            sum=sum+matrix[i][j];
        }
        
         }
    return sum;
    }
    

    int main()
    {
        int matrix[5][5];
         // entering the elements in the matrix 1
      printf("Enter elements of the matrix\n");
       for (int i= 0; i < 2; i++)
      {
      for (int j = 0; j < 2; j++)
      {

         scanf("%d", &matrix[i][j]);
       }
      }
      int s=digaonal_elements(matrix);
      printf("The sum of diagonal matrix is:%d\n",