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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                    printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}
