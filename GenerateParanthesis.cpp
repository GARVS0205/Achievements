#include<iostream>
using namespace std;
int n;
char arr[100];
void Solve(int i)
{
    if(i==2*n)
    {
        arr[i]='\0';
        cout<<arr<<endl;
        return;
    }

    arr[i]='(';
    Solve(i+1);
    arr[i]=')';
    Solve(i+1);
}
int main()
{
    cin>>n;
    Solve(0);
}

    
   