#include<iostream>
using namespace std;

    
char table[][10]={" ",".+@$ ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
char input[15];
char output[15];
//table[3]="def"
//table[3][0]=d
//table[3][1]=e
//table[3][2]=f

void Solve(int i,int j)
{
    if(input[i]=='\0')
    {
        output[j]='\0';
        cout<<output<<endl;
        return;
    }
    int CurrentDigit=input[i]-'0';
    /* CurrentDigit=49-48 if input in character array is 1 
    Character 1 ko Integer 1 bana diya hai.
    Or we can also subbtract 48 which is ascii value of 0
    To Make character into digit.
    Because table[character] is not possible
    index character nahi ho skta integer hi hoga.
    F(0)=table[currentDigit][k]+F(1)
    k will go from 0 to last index of table[current_digit]ka last index
    */

   for(int k=0;table[CurrentDigit][k]!='\0';k++)
   {
        output[j]=table[CurrentDigit][k];
        Solve(i+1,j+1);
   }
}
int main()
{
    cin>>input;
    Solve(0,0);

    
}