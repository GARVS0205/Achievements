#include<bits/stdc++.h>
using namespace std;
const int N=0;
int target;
int ans=INT_MAX;/// Min steps to reach target out of all the paths.

/*
    Task We have to do:
    1. Identify which all pairs can make my target.
    2. After this individually check how many steps do the above pairs take to reach (1,1).
    3. Find Min number of steps.
*/
void Function(int x,int y,int steps)
{
    /*Steps here is this parameter that counts number of steps
     in the current path */
     if(x==1 and y==1)
     {
        if(steps<ans)
        {
            ans=min(steps,ans);
        }
     }
    if(x-y>0)
    {
        Function(x-y,y,steps+1);
    }
    if(y-x>0)
    {
        Function(x,y-x,steps+1);
    }
}
void Solve(int target)
{
    if(target==1)//1 ko banane mein kitne steps lagte hain from (1,1)
    {
        ans=0;
        return;
    }

    for(int i=1;i<target;i++)
    {
        /* I will ask recursion now in how many steps
         I will reach 1,1 from the current pair (i,target-1) that make my target.
         */
        Function(i,target-i,1);
        /* 1 here represents steps and why I have initialised it with 1 because 
        you take 1 step from this pair (i,target-i) to reach target.
        */
    }
}
int main()
{
    cin>>target;
    Solve(target); 
    cout<<ans<<endl;
}