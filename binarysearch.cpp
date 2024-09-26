#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,6};
    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end =n-1;
    int key=1;//Value which we want to know that
    //it is present on which index
    int mid=(start+end)/2;
    
    while(start<=end)
    {
        mid=(start+end)/2;//This will always be  int bcoz int/int
        if(arr[mid]==key){
        cout<<mid;
        break;
    }
    if(arr[mid]>key){
        end=mid-1;
    }
    else {
        //a[mid]<key
        start=mid+1;
    }

}
}