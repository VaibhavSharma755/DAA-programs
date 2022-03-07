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
    printf("Enter a key to be searched: ");
    int key,c=0;
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            c++;
    }
    if(c>0){
        printf("Present\n");
        printf("%d -> %d",key,c);
    }
    else
        printf("Not present");
    return 0;
}
