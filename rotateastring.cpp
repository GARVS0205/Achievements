#include<iostream>
using namespace std;
int main()
{
    char arr[100]="CodingBlocks";
    int jump;
    cin>>jump;
    int length=0;
    while(arr[length]!='\0'){
        length++;
    }
    cout<<"length: "<<length<<endl;
    for(int i=length-1;i>=0;i--){
        arr[i+jump]=arr[i];
    }
    for(int k=0;k<jump;k++){
        arr[k]=arr[k+length];
    }
    arr[length]='\0';
    cout<<arr;
    
}