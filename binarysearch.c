#include <stdio.h>
void main()
{
    int n,i,array[100],low,high,mid,key;
    printf("Enter the numbere of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    mid=(high+low)/2;
    while(low<=high)
    {
        if(array[mid]<key)
        {
            low=mid+1;
        }
        else if(array[mid]==key)
        {
            printf("The %d found at the position %d",key,mid);
            break;
        }
        else{
            high=mid-1;
            mid=(low+high)/2;
        }
        if(low>high)
        {
            printf("The key is not found");
        }
    }
}