#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int pos=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for (int i=0;i<n;i++){
        if(arr[i]==target)
        {
            pos=arr[i];
            for(pos;pos<n-1;i++)
            {
                arr[pos]=arr[pos+1];
            }
        }
    }
    n--;
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
    
}