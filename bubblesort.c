#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,temp;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Before sorting\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nAfter sorting\n");
    //Implementing bubble sort
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
