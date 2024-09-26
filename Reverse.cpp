#include<iostream>
using namespace std;
int main()
{
    int number=123;
    int reversed_number=0;
    while(number){
        reversed_number=(reversed_number*10)+(number%10);
        number=number/10;
    }
    cout<<reversed_number;
    
}
