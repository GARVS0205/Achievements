#include<iostream>
using namespace std;


void Permute(char *input,int start)
{
    //Array use kiya hai toh pass by reference hai yeh
    //Ismein backtracking lagani pdegi return krte time.
    if(input[start]=='\0')
    {
        cout<<input<<endl;
        return;
    }
    for(int end=start;input[end]!='\0';end++)
    {
        swap(input[start],input[end]);
        Permute(input,start+1);
        //To retain the original state 
        //We will use backtracking here.
        swap(input[start],input[end]);
    }
}

void Permute2(string s,int start)
{
    //String use kiya hai toh pass by value hai
    //Isiley koi Backtracking nahi required ismein
    if(start==s.length())
    {
        cout<<s<<endl;
        return;
    }
    for(int end=start;s[end] !='\0';end++)
    {
        swap(s[start],s[end]);
        Permute2(s,start+1);
    }
}

int main()
{
    char input[200];
    string s;
    cin>>input;
    cin>>s;
    Permute(input,0);
    cout<<"---------------------"<<endl;
    Permute2(s,0);
}