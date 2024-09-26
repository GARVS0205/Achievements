/*
We need to find shortest path from (1,1) to
either (x,5) or (5,y)
where x and y can be anything
We can get a new pair (x+y,y) or (x,x+y)
from the given problem in a single step.
Initial pair is (1,1) that is given to us 

Input 5
Output 3 [Min number of steps from (1,1) to either x or y 
hitting the target 5]
*/

#include<iostream>
using namespace std;
int target;

int Solve(int x, int y)
{
    if(x>target or y> target)
    {
        /*
        Return something so big that can never become the
        answer.
        This is done to avoid infinite loop. 
        We are not taking int max because we are
        adding 1 in the min statement and that is not possible
        We can not add 1 in max
        If we add 1 in max then it will go to negative side
        Jab positive side ki range khatam ho jaati hai
        Toh Voh negative side chala jata hai.
        */
       return 1e7;

    }
    if(x==target or y==target)
    {
        return 0;
    }
    int Op1=Solve(x+y,y);
    int Op2=Solve(x,x+y);

    int value=min(Op1,Op2)+1;
    return value;;
}

int main()
{
    cin>>target;
    int ans= Solve(1,1);
    cout<<ans;
    
}