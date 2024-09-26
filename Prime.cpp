#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number.: ";
    cin>>number;
    int divisor=2;
    while(divisor<=(number/2))
    {
        if(number % divisor ==0)
        {
        cout<<"Not a prime number";
        return 0;
        }
        divisor=divisor+1;
        
    }
 cout<<"Prime";
}