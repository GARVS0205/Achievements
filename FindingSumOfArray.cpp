#include<iostream>
using namespace std;

int Sum(int*arr,int index,int n)
{
    if(index==n)
    {
        return arr[n];
    }
   int sum=arr[index]+Sum(arr,index+1,n);
   return sum;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Sum(arr,0,n-1);
}
