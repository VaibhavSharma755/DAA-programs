#include <iostream>

using namespace std;

int main()
{int n;
cout<<"enter the no of elements";
cin>>n;
int arr[n];
int count=0;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    
}

for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            count++;
        }
    }
}
for(int i=0;i<n;i++)
    cout<<arr[i];
    cout<<"total no of comparisions are"<<count;

    return 0;
}
