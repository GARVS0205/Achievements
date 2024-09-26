#include<iostream>
using namespace std;
int main()
{
/*
This code will not print name and it will not even take the char arr's input value because
we will press enter after giving input of integer value,
and cin.getline considers \n as a delimiter and when delimiter is encountered it stops reading.
The input buffer consists of following items.
integer input, \n , char arr input.
But it will stop as \n only and so char arr won't receive any input.
To avoid this either we'll have to use cin.ignore after giving input
of integer which will ignore the \n character and will start taking input
of character array.
or we can give the input without pressing enter but using the space in between.
But in this case we will get an extra space in between the "name' and the value of 
name in the output. 
 */  

int i;
cin>>i;
char arr[100];
cin.getline(arr,100);
cout<<"age: "<<i<<endl;
cout<<"name: "<<arr;
}