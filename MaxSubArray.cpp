#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int array[5]={1,2,3,4,-5};
    int n=5;
    int max_sum= INT_MIN;
    int start=-1;
    int end=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<5;j++)
        {
            int sumOfCurrentSubArray=0;
            for(int k=i;k<=j;k++)
            {
                sumOfCurrentSubArray+=array[k];
            }
            if(sumOfCurrentSubArray>max_sum)
            {
                max_sum=sumOfCurrentSubArray;
                start=i;
                end=j;
            }
        cout<<endl;
        }


    }
    cout<<max_sum<<endl;
for(int i=start;i<=end;i++)
{
    cout<<array[i]<<" ";
}
}