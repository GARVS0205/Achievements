
#include<iostream>
using namespace std;

int Solve(int n) {   
    if (n == 0) {
        return 0;
    }

    // Get the last digit
    int rem = n % 10;

    // If the last digit is 0, change it to 5
    if (rem == 0) {
        rem = 5;
    }

    // Process the rest of the number recursively
    return Solve(n / 10) * 10 + rem;
}
/*  MY APPROACH (NOT RIGHT)
int Solve(int n)
{   
    
    if(n/10==0)
    {
    return 0;
    }
    int rem=n%10;
    if(rem==0)
    {
        rem=5;
        n=n*pow(10,count)+rem;
        cout<<n;
    }
    else
    {
        count++;
        Solve(n/10);
    }
   
}
*/
int main()
{
    int n;
    cin>>n;
    cout<<Solve(n);
    
}