#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[]={1,2,3};
    int n=3;
    int bitpos=0;
   int x=pow(2,n)-1;
   for(int i=0;i<=x;i++)
   {
    int number=i;
    int bitpos=0;
    while(number)
    {
        if(number&1)
        {
            cout<<a[bitpos]<<" ";
        }
        number=number>>1;
        bitpos++;  
    }
    cout<<endl;
   }
} 