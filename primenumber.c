#include<stdio.h>
void main()
{
    int u,l,i,j,flag=0;
    printf("Enter the Upper limit:");
    scanf("%d",&u);
    printf("Enter the lower limit:");
    scanf("%d",&l);
    for(i=l;i<=u;i++)
    {
        flag=0;

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
                break; 
            }
            

        }
        if(flag==0)
            {
                printf("%d\n",i);
            }
        
        
            


        
    }

    }

