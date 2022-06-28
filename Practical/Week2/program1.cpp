#include <iostream>
          using namespace std;
           int main()
     {int n,key,flag=0,count=0;
cout<<"enter the no of terms";
cin>>n;
int arr[n],temp[n];
cout<<"entert he elements";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"enter the key for searching";
cin>>key;
for(int i=0;i<n;i++)
{
    if(arr[i]==key){
        flag=1;
    
    count++;
    }
}
if(flag==0)
cout<<"not present";
if(flag==1)
cout<<"present"<<"and repeated "<<count <<"times";
   
    return 0;
}
