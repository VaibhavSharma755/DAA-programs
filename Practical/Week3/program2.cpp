#include <iostream>

using namespace std;

int main()
{int min;
int n;
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
    min=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min])
       { min=j;
       count++;
           
       }
    }
    int temp;
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
}
 for(int i=0;i<n;i++)
 cout<<arr[i];
 cout<<"total comparisions are"<<count;
  
    return 0;
}
