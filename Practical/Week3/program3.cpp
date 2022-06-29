#include <iostream>

using namespace std;

int main()
{int n;
cout<<"enter the no of terms";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    
    cin>>arr[i];
}
int count=0;
int min=arr[0];
for(int i=1;i<n;i++)
{int temp=arr[i];
      int j=i-1;
      while(j>=0&&temp<=arr[j])
      {count++;
          arr[j+1]=arr[j];  
          j--;
      }
      arr[j+1]=temp;             
}
for(int i=0;i<n;i++)
cout<<arr[i];
cout<<"total no of comparisions are"<<count;
    return 0;
}
