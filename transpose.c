///transpose output
#include<stdio.h>
int main(){
    int arr[4][2]={4,5,4,5,2,8,9,7};
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
      for (int j = 0; j <4; j++)
    {
        for (int i = 0; i <2; i++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}