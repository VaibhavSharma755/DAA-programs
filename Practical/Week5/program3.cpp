#include <iostream>
#include<vector>
using namespace std;
int main()
{
    
    int n,m;
    cout<<"enter the sizes of aray";
    cin>>n;
    cin>>m;
    int Arr[n],arr[m];
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    for(int i =0;i<m;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=0;
    while(i!=n&&j!=m){
        if(Arr[i]==arr[j])
        {cout<<Arr[i]<<' ';
        i++;
        j++;
            
        }
        else if(Arr[i]>arr[j])
        j++;
        else if(Arr[i]<arr[j])
        i++;
    }
    
}
