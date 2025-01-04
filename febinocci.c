#include<stdio.h>
int febin(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else 
    {
        return febin(n-1)+febin(n-2);

    }
}
int main()
{int u,i,num;
printf("Enter the upper limit:");
scanf("%d",&u);
{
for(i=0;i<=u;i++)
{
    int result=febin(i);
    printf("%d ",result);
}}
return 0;
}