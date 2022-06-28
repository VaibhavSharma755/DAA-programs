#include <iostream>

using namespace std;
int check(int sum,int arr[],int n){
    for(int i=0;i<n;i++)
    {

        if(sum==arr[i])
        {cout<<i;
             return 1;
        }


    }
    return 0;


}

int main()
{int n;
cout<<"enter the size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int sum,ans;
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {

        sum=arr[i]+arr[j];
       ans= check(sum,arr,n);
       if(ans==1)
        cout<<","<<i<<","<<j<<endl;
    }
}


    return 0;
}
