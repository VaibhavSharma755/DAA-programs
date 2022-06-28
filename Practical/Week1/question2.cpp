#include<iostream>
using namespace std;
#include<stdlib.h>
int binarysearch(int arr[],int key,int n)
{
    int lb=0,ub=n-1;
    int mid;
    int count=0;
    while(lb<=ub)
    {    
        mid=(lb+ub)/2;
        if(arr[mid]==key){
            
            cout<<"There are"<<count+1 <<"no of comparisions";
            
        return mid;
        
        }
        if(key<arr[mid])
        {count++;
            ub=mid-1;
           
        }
        if(key>arr[mid])
        {
            count++;
            lb=mid+1;
    
            
        }
        
    }
    return -1;
}
int main()
{
   int n,ans;
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
   ans=binarysearch(arr,key,n);//calling binary search function
 if(ans==-1)
 cout<<"element not found";
 else
 cout<<"and element  founded at"<<ans<<"th position"<<endl;
 
   
}
