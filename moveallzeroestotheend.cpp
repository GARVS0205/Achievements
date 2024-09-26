/*
Given an integer array, move all zeros present in it to the end. The solution should maintain the relative order of the items in the array and should not use the constant space.

Input Format
First line of input contains integer N, denoting the size of the array. Next line of input contains N space separated integers denoting the elements of the array.

Constraints
1<=N<=10^5

Output Format
Print the modified array in which all zeroes are moved to right.

Sample Input
9
6 0 8 2 3 0 4 0 1
Sample Output
6 8 2 3 4 1 0 0 0 
Explanation
In 6 8 2 3 4 1 0 0 0 the non-zero elements preserve their order while the 0 elements are moved to the right.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            
        int k=n-1;
        while(count)
        {
            arr[k]=0;
            count--;
            k--;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}