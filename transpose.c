#include<stdio.h>
int main()
{
    int i,j,matrix[20][20],r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the array:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The transpose of the matrix is:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",matrix[j][i]);
        }
    }
    return 0;
}