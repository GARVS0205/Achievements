#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int setbits=0;
    int bitpos=0;
    //5-->101
    while(number)
    {
        if(number&1)
        {
           cout<<bitpos<<" ";
           setbits++;
        }
        bitpos++;
        number=number>>1;
        
    }
    
}