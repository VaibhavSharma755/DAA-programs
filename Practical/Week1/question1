#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{
   int n,ans=0,count=0;
   cout<<"enter the no of elements ";
   cin>>n;
int arr[n];
   cout<<"enter the elements";
   for(int i=0;i<n;i++)
   {
      cin>> arr[i];
   }
   int key;
   cout<<"enter the key element";
   cin>>key;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
    {    ans=i;
    break;
        
    }
        count++;//for finding total no of comparisions
        
    }
    if(ans==0)
    cout<<"no element found";
    else
    cout<<"key element is at"<<ans<<"no of comp are"<<count+1;

    return 0;
}
