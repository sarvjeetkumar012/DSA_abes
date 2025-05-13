#include<stdio.h>
int main(){
    int a[2][2],b[2][2], sum[2][2], mul[2][2];
    printf("enter the firstmatrix:\n ");
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix : \n ");
    
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("addition of matrix:\n");
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        sum[i][j]=a[i][j]+b[i][j];
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }

    printf("multiplication of matrix:\n");
    for (int  i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++){
            mul[i][j]=0;
            for (int k = 0; k < 2; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
            
        
        printf("%d",mul[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}