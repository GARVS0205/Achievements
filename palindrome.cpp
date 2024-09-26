#include<iostream>
using namespace std;
int length(char *a)
{
    int len=0;
    for(len=0;a[len];len++);/*
    If we want nothing inside the for loop we can
    use the terminator ; just after the closing paranthesis 
    of for loop as done in the above statement.*/
    return len;
    
}
bool isPallindrome(char *arr)
{
    int i=0;
    int j=length(arr)-1;
    while(i<j){
        if(arr[i]!=arr[j])
        {   
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
   char arr[100];
   cin>>arr;
   cout<<isPallindrome(arr);
    
}