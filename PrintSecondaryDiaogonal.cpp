//MY APPROACH
#include<iostream>
using namespace std;
int main()
{
    int rows=0,columns=0;
    cin>>rows>>columns;
    int arr[rows][columns];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=columns-1;j>=0;j--)
        {
            cout<<arr[i][j];
            i++;
        }
    }

}
/*
BETTER APPROACH

for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        if(rows+columns==columns-1)
            {
                cout<<arr[rows][columns];
            }
    }
}    
*/    
