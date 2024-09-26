#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,0,-1};
    int smallest=arr[0];
    int i;
    for(i=1;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            
        }
        
    }
    cout<<smallest;
    cout<<i;
    
    
    
}