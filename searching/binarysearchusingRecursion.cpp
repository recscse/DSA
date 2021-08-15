#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int binarySearch(int arr[], int left,int right, int target){ 
	if(right >= left) {
		int mid = left+(right-left)/2;
		if(arr[mid] == target) return mid;
		
		if(arr[mid]>target) return binarySearch(arr,left,mid-1,target);
		
		else return binarySearch(arr,mid+1,right,target);
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target; cin>>target;
	int res = binarySearch(arr,0,n-1,target);
	(res == -1)? cout<<-1 : cout<<res;
	return 0;
}

