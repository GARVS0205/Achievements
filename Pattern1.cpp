#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
    int counter=1;
    for(counter=1;counter<=n-row;counter++){
        //n-row no of imes spaces print kar rhey hain.
        cout<<" ";

    }
    int value=1;

    for(counter=1;counter<=row;counter++){
        cout<<value;
        value++;

    }
    for(counter=1;counter<=row-1;counter++){
        
    }
    }
}