#include<iostream>
using namespace std;
int main()
{
 int a[]={1,2,3,4};
   
 char ch;
//This is done to
 //fool the compiler by using explicit
 //typecasting and it will print the address
 //of ch bucket. 

cout<<sizeof(&ch);
}