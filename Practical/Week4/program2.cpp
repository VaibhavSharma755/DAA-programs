#include <iostream>
using namespace std;
void swap(int &i,int &j){
    int temp;
    temp=i;
    i=j;
    j=temp;
}
int  partition(int arr[],int lb,int ub)
{
    int x=arr[lb];
    int i=lb;
    for(int j=lb+1;j<=ub;j++){
        if(arr[j]<=x){
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[lb],arr[i]);
    return i;
}

void quick(int arr[],int lb,int ub){
    if(lb < ub)
    {
        int pr;
        pr=partition(arr,lb,ub);
        quick(arr,lb,pr-1);
        quick(arr,pr+1,ub);
        
    }
}
int main()
{
    

  int n;
cout<<"enter the no of elements";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int lb=0;
int ub=n-1,k;
quick(arr,lb,ub);
cout<<"enter the kth element";
cin>>k;
cout<<"the "<<k<<"th largest element is";
cout<<arr[n-k];
cout<<"the "<<k<<"th smallest is";
cout<<arr[k-1];

   

    return 0;
}
© 2022 GitHub, Inc.
