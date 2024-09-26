#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int ans=0;
   int number;
   for(int i=0;i<n;i++){
    cin>>number;
    
    ans=ans^number;
   } 
   cout<<ans;
   return 0;
}