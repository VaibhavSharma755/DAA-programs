#include<stdio.h>
#include<math.h>
int find_element(int element);
int arr[100],n;

int main(){
    int i,element,result;
    printf("Enter the number of elements in array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search");
    scanf("%d",&element);
    result=find_element(element);
    printf("%d",result);
    if(result==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("element %d is found at %d ",element,result);
    }
}

int find_element(int element){
    int jump,prev=0;
    jump=n/2;

    while(arr[prev]<element)
    {
        if(arr[jump]>element || jump>=n)
        {
            break;
        }
        else
        {
            prev=jump;
            jump=jump+sqrt(n);
        }
    }
    while(arr[prev]<element)
    {
        prev++;
    }
    if (arr[prev]==element)
    {
        return prev+1;
    }
    else
    {
        return -1;
    }
}