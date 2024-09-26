#include<iostream>
using namespace std;
int main()
{
    char ch;
    ch=cin.get();
    int whitespace_count=0;
    int alphabets_count=0;
    int digit_count=0; 
    int otherchar_count=0;

    while(ch!='$')
    {
            if('a'<=ch && ch<='z'){
                alphabets_count++;
            }
            else if ('0'<=ch && ch <='9'){
                digit_count++;
            }
            else if (ch == ' ' or ch =='\t' or ch=='\n'){
                whitespace_count++;
            }
            else otherchar_count++;
            ch=cin.get();
    }
    cout<<"count of alphabets"<<alphabets_count<<endl;
    cout<<"Count of whitespaces:"<<whitespace_count<<endl;
    cout<<"Count of digits:"<<digit_count<<endl;
    cout<<"Count Of Other Characters:"<<otherchar_count;
    return 0; 
}