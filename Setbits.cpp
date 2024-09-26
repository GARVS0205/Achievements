#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int setbit_count=0;
    while(number){
        if ((number & 1)==1){
            setbit_count++;
        }
        number=number>>1;

    }
 cout<<setbit_count;
}