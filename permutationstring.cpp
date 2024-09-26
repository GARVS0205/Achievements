#include<iostream>
using namespace std;
int main()
{   //sirf small alphabets allowed hain
    char arr1[20]="abcd";
    char arr2[20]="dcba";
    int freq1 [26]={0}; //This will initialize all values of array to 0.
    int freq2[26]={0};
    for(int i=0;arr1[i];i++)
    {
        int index=arr1[i]-'a';
        freq1[index]++;
    }
    for(int i=0;arr2[i];i++)
    {
        int index=arr2[i]-'a';
        freq2[index]++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            cout<<"They are not permutations.";
            return 0;
        }
    

    }
    cout<<"Yes they are permutations.";

     
}