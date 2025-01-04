#include <stdio.h>
int main()
{
    int count=0,i,j;
    char str[50];
    printf("Enter the string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("The number of vowels is %d",count);
}