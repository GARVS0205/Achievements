#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    switch(ch)
    {
        case 'n':
        case 'N'://Here we are taking benifit of the 
        //glitch of switch case that is it executes
        //every statement after condition is met 
        //until break statement or curly braces come
        
        cout<<"north\n";
        break;
        case 'e':
        case 'E':
        cout<<"east\n";
        break;
        case 'w':
        case 'W':
        cout<<"west\n";
        break;
        case 's':
        case 'S':
        cout<<"south\n";
        break;
        default:
        cout<<"abey kahan jakr manega.";
    }
}