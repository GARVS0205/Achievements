  #include<iostream>
  using namespace std;
  int main()
  {
    int a[]={3,5,8,10};
    int n=sizeof(a)/sizeof(int);
    int b[]={1,2,4,9,11};
    int m=sizeof(b)/sizeof(int);
    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    int c[m+n];

    for(;i>=0 and j>=0;){
        if(a[i]>b[j])
        {
            c[k]=a[i];
            i--;
            k--;
        }
        else if(b[j]>a[i])
        {
            c[k]=b[j];
            j--;
            k--;
        }
    }

    
    while(i>=0)
    {
        c[k]=a[i];
        i--;
        k--;
    }
    for(int z=0;z<m+n;z++){
        cout<<c[z]<<" ";
    }



    return 0;
}
  