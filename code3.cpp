#include<iostream>
using namespace std;
void update(int *a){
(*a)++;
}   
int main()
{
    int a;
    cin>>a;
    int *b=&a;
    update(b);
    cout<<a;
    return 0;

}