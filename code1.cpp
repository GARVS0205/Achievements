#include<iostream>
using namespace std;
int Sum(int x, int arr[], int n){
    
    int counter=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<arr[j];
            }
        }
    }
    return counter;
}
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9,10};
    int x=10;
    int n=sizeof(arr)/sizeof(int);
    int counter=Sum(x,arr,n);
    
}