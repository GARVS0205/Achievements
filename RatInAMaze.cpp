//Kuch error hai!!!!
//Refer File 2 with the same name
#include<bits/stdc++.h>
using namespace std;
const int N = 0;

//Solution[x][y]=1 means this x,y is part of the path reaching to destination
//Solution Matrix is initialised with value 0
bool Solution[1001][1001]={{0}};


// Visited Matrix bhi initialised hai with value 0
bool Visited[1001][1001]={{0}};
/*
Visited [x][y] means you have already visited this x,y box and you don't need to 
revisit this box
*/

int n,m;
char maze [1001][1001];

bool RatInMaze(int x,int y)
{
    if(x==n-1 and y==m-1)
    {
        /*
        This means that I have reached the desired box so I 
        have to inform my parent reciurssion that I have found a solution
        and I also have to print the soultion matrix.
        */

       Solution[x][y]=1;

       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            cout<<Solution[i][j]<<" ";
        }
        cout<<endl;
       }
       return true;
    }
    
    /*
    Currently you are standing at box x,y
    and there are 2 ways to move either right i.e (x,y+1)
    or down i.e (x+1,y)
    */

   /*
        Steps:
        1. Whenever you go to any box: Check whether 
        this is correct box or not that means the current box 
        should not be a visited box.
        2. If the above condition is satisfied that meanswe are on a 
        correct box then we have to make this box a part of solution
        and also make this box as visited in order to never revisit this box.
        
   */

    if(Visited[x][y]==1)
    {
         return false;
    }
    Solution[x][y]=1;
    Visited[x][y]=1;

    /*
    I will ask recurssion to go to its right and then check there is a path to the 
    destination or not. If there is tell me and if there isn't then also tell me.
    */

   /*
   If you find the path to the destination then please print the path uptil solution.
   */
   
   if(y+1 <= m and Visited[x][y+1] == 0)
   {
        bool rightans=RatInMaze(x,y+1);
        if(rightans==1)
        {
            return true;
        }
   }

   else if(x+1 <=n and Visited[x+1][y]==0)
   {
     bool downans=RatInMaze(x+1,y);
     if(downans==1)
     {
        return true;
     }
   }

   /*
   If we reach here that means wee tried to find a path to 
   the right and to the down and were not able to 
   this means that box x,y can never be a part of the soulution
   and so make this 0 in the solution matrix. 
   */
  Solution[x][y]=0;//Backtracking
  return false;
}


int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            {
                cin>>maze[i][j];
                if(maze[i][j]=='X')
                {
                    Visited[i][j]=1;
                }
            }
    }
    int ans=RatInMaze(0,0);
    if(ans==0)
    {
        cout<<"-1"<<endl;
    }
}