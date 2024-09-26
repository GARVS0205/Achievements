#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={2,3,4,5,6};
    int largest=INT_MIN;
    for(int i=1;i<=4;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        }
        cout<<largest;

}
