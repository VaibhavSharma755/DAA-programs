#include <iostream>
#include<vector>
using namespace std;
int main()
{
    
    int n;
    cout<<"enter the size of aray";
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    int key;
    vector<vector<int> >vi;
    cout<<"enter the key";
    cin>>key;
    int l=0,r=n-1;
    while(l<r){
        vector<int>v;
        if(Arr[l]+Arr[r]==key){
          cout<<l<<',';
          cout<<r;
    l++;
    r--;
        }
        else if(Arr[l]+Arr[r]>key)
        r--;
        else if(Arr[l]+Arr[r]<key)
        l++;
    }
    
    
}
