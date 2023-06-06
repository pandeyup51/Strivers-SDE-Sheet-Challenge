#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	map<int,int>ma;
	for(int i=0;i<n;i++){
		ma[arr[i]]++;
	}
	for(auto x:ma){
		if(x.second>=2){
			return x.first;
		}
	}
}
