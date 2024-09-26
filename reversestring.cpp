#include<iostream>
using namespace std;
int main()
{
    char arr[5]="Garv";
    int i=0,j=3;
    while(i<j){
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<arr;
}