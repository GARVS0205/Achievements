#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,0,-1,3,2};
    int n=sizeof(arr)/sizeof(int);
    for( int i=0;i<n-1;i++){
        int smallest_index=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[smallest_index])
        {
            smallest_index=j;
        }
    }
    swap(arr[i],arr[smallest_index]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
