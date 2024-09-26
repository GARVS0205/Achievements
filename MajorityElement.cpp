#include<iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	
	int arr[n],counter=0;
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		
			
            if(arr[i]==arr[i+1]){
				counter+=1;
                cout<<arr[i];
			}
            
		
        }
        if(counter>n/2){
            cout<<counter;
        }
       
	}
   

	