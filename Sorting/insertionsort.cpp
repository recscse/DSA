#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int m=0;m<n;m++){
	    cin>>arr[m];
	}

int i,j,key;
for(j=1;j<n;j++){
    key = arr[j];
    i = j-1;
    while(i>=0 && arr[i]>key){
        arr[i+1] = arr[i];
        i=i-1;
       
    }
     arr[i+1] = key;
}
for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
}
	return 0;

}
