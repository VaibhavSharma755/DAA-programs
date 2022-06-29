#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{char alph[100];
int n;
cout<<"enter the no of terms";
cin>>n;

cout<<"enter the alphabets";
for(int i=0;i<n;i++)
{
    cin>>alph[i];
    
}
vector<int> arr(200);


for(int i=0;i<n;i++)
{
arr[alph[i]]++;    
}
int max=0;
for(int i=0;i<200;i++){
    if(arr[i]>max)
    max=i;
}
sort(arr.begin(),arr.end());

cout<<"alphabet is "<<(char)max;
cout<<arr.back();
    

    return 0;
}
