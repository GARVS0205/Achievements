#include<iostream>
using namespace std;
int n;
char output[15];
int Solve(int i, char Max_Char)
{
    if(i==n)
    {
        output[i]='\0';
        cout<<output<<endl;
        return 0;
    }

    for(char ch='a';ch<=Max_Char;ch++)
    {
        output[i]=ch;
        
        if(ch== Max_Char)
        {
            Solve(i+1,Max_Char+1);
        }
        else
        {
            Solve(i+1,Max_Char);
        }
    }
}
int main()
{
    cin>>n;
    Solve(0,'a');
}