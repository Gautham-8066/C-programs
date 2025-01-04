#include <stdio.h>
int main()
    {
        char str[50],rev[50];
        printf("Enter the string:");
        gets(str);
        strcpy(rev,str);
        strrev(rev);
        if (strcmp(str,rev)==0)
        {
            printf("The given string is a palindrome ");
        }
        else{
            printf("The given string is not a palindrome:");
        }
        return 0;
        


    }
