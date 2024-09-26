#include<iostream>
using namespace std;
void PrintArray (int a[],int n)// We can give any
//name to the array but by convention we give it 
//name which was in the main function.
{
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    PrintArray(arr,n);
    return 0;
}