#include <stdio.h>
int factorial(int n)
{
    if((n==0)||(n==1))
    {
        return 1;
    }
   else
   {
    return n*factorial(n-1);
   }}
int main()
{
    int num;
    printf("Enter the number whose factorial you want to find:");
    scanf("%d",&num);
    int result=factorial(num);
    {
        printf("factorial of %d=%d \n",num,result);

    }
    return 0;
}