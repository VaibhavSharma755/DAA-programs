#include <iostream>

using namespace std;
void merge(int arr[],int lb,int mid,int ub){
    
    int n1=mid-lb+1;
    int n2=ub-mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i< n1;i++)
    {
        a1[i]=arr[lb+i];
    }
     for(int i=0;i< n2;i++)
    {
        a2[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=lb;
    while(i< n1&&j< n2){
        if(a1[i]<a2[j])
        {
            arr[k]=a1[i];
            i++;
        }
        else{
            arr[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i< n1){
        arr[k]=a1[i];
        i++;
        k++;
    }
    while(j< n2){
        arr[k]=a2[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int lb,int ub){
    if(lb==ub)
        return;
    else
    {int mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
}}

int main()
{int n;
cout<<"enter the no of elements";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int lb=0;
int ub=n-1;
mergesort(arr,lb,ub);
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
   

    return 0;
}
