#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=5;
    for(int i=0;i<=n;i++){
        if(arr[i]==6){
            cout<<i;
        }
    }
}