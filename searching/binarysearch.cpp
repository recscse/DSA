#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int n, int target){
	  int left_index = 0;
	  int right_index = n-1;
	  while(left_index < right_index){
	  	int middle_index = left_index + (right_index - left_index)/2;
	  	if(arr[middle_index] == target) return middle_index;
	  	
	  	if(arr[middle_index] > target) left_index = middle_index -1;
	  	else left_index = middle_index+1;
	  }
}

int main() {

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	cout<<binarySearch(arr,n,target);
	return 0;
}

