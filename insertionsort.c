#include<stdio.h>
void selection_sort(int arr[],int n)
{

    int i,pos=0,j,temp;int camp=0;int swap=0;
    int min;
    for(i=0;i<n-1;i++)
    {


        int min =arr[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                camp++;
                min=arr[j];
                pos=j;
            }
        }

        if(pos!=i)
        {
            arr[pos]=arr[i];
            arr[i]=min;
            swap++;
        }
    }

    printf("%d\t",camp);
    printf("%d\t",swap);
    //printarray(arr,n);

//void printarray(int arr[],int n)
//{

    //int i;
    printf("sorted array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{

    int arr[100];int n;int s,i,k,m;
    scanf("%d",&m);
    for(k=1;k<=m;k--)
    {
        printf("enter the no.of elements");
        scanf("%d",&s);
            printf("enter the elements of array:");
        for(int i=0 ;i<s ;i++)
        {

            scanf("%d",&arr[i]);


        }




      selection_sort(arr,s);

    }

}
