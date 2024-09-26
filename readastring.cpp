//Code to read a string which have space in betweeen.
#include<iostream>/*cin stops reading input after it
encounters null characters i.e '\0','\t',''.
*/
using namespace std;
/*void  readstring(char*a){
 char ch=cin.get();
 int i=0;
 while(ch!='\n')// Backslash n is enter key.
 {
    a[i]=ch;
    i++;
    ch=cin.get();
 }
 a[i]='\0';
}*/
int main()
{
    char arr[20];
    cin.getline(arr,100,'$'); /*cin.getline is an inbuilt function to read string
     and it requires 3 arguments 
(arr_name,max_no._of_characters_to_read,delimiter(for example '$' in this code))
If we don't pass any delimiter it takes '\n'   by default which is enter key.
    
    */cout<<arr;
}