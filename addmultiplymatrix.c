#include <stdio.h>
int main()
{
    int i,j,k,a[20][20],b[20][20],sum[20][20],product[20][20],r1,r2,c1,c2;
    printf("Enter the order of the matrix1:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the order of the matrix2:");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements in the matrix 1:" );
    if(r1==r2&&c1==c2)
    {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        
        }
    }
    printf("Enter the elements in the matrix 2:" );
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    printf("Sum of a matrix ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d  ",sum[i][j]);
        
        }
        printf("   \n");
    }
    }
    else
    {
        printf("Matrix addition not possible:\n");
    }
    if(c1==r2)
    {
    printf("\nproduct of the matrix is:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            product[i][j]=0;

            for(k=0;k<r2;k++)
            {
            product[i][j]=product[i][j]+a[i][k]*b[k][j];
            }
        }
    }for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
                printf("%d  ",product[i][j]);
        
        }
        printf("   \n");
    }
    }
    else{
        printf("Matrix multiplication not possible:\n");
    }


    printf("\n");
    return 0;

    
}