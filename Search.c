#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be searched: ");
    int find;
    int c=-1;
    scanf("%d",&find);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==find)
        {
            c=i;
            break;
        }
    }
    if(c==-1)
        printf("Element not found");
    else
        printf("Element found at index %d",c);
}
