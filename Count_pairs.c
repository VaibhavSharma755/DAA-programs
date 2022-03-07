#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int key,c=0;
        printf("Enter the value of key: ");
        scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==key)
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
