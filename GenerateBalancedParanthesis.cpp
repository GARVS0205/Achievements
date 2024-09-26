/*
Balanced Paranthesis tab banenge jab closing 
ka count less than open hoga and open bracket
less than n hoga 
*/
#include<iostream>
using namespace std;
int n;
char arr[100];
void Solve(int i,int open_count,int close_count)
{
    if(i==2*n)
    {
        arr[i]='\0';
        cout<<arr<<endl;
        return;
    }
    //Choosing Closing Brackets
    if(close_count<open_count)
    {
    arr[i]=')';
    Solve(i+1,open_count,close_count+1);
    }

    //Choosing Opening Bracket 
    if(open_count<n)
    {
    arr[i]='(';
    Solve(i+1,open_count+1,close_count);
}
}
int main()
{
    cin>>n;
    Solve(0,0,0);
}


    
   