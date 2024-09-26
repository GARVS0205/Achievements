#include<iostream>
using namespace std;
int SumOfArray(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<SumOfArray(arr,n);
    return 0;
}