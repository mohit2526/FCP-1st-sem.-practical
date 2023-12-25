#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    int n1,n2,res;
    while(1)
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponentiation\n");
        printf("6. Exit\n");
        printf("your choice?\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the numbers:");
            scanf("%d%d",&n1,&n2);
            res=n1+n2;
            printf("result is %d",res);
            break;
            case 2:
            printf("Enter the numbers:");
            scanf("%d%d",&n1,&n2);
            res=n1-n2;
            printf("result is %d\n",res);
            break;
            case 3:
            printf("Enter the numbers:");
            scanf("%d%d",&n1,&n2);
            res=n1*n2;
            printf("result is %d\n",res);
            break;
            case 4:
            printf("Enter the numbers:");
            scanf("%d%d",&n1,&n2);
            res=n1/n2;
            printf("result is %d\n",res);
            break;
            case 5:
            printf("Enter the numbers:");
            scanf("%d%d",&n1,&n2);
            res=pow(n1,n2);
            printf("result is %d\n",res);
            break;
            case 6:
            printf("Exit\n");
            break;
            default:
            printf("Invalid choice:");
            


        }
    }
}