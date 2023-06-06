#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	set<int>s1;
	  map<int,int>ma1;
	for(int i=0;i<n;i++){
		s1.insert(arr[i]);
		ma1[arr[i]]++;
	}
	int f=0;
	for(auto x:ma1){
		if(x.second>=2){
          f=x.first;
		  break;
		}
	}
	int j=1;
	int d=0;
	for(auto x:s1){
      if(x!=j){
		d=j;
		break;
	  }
	  j++;
	}
	pair<int,int>v1;
        if (d == 0) {
          v1.first = n;
        }
		else{
			v1.first=d;
		}
        if (f == 0) {
          v1.second = n;
        }
		else{
			v1.second=f;
		}
        return v1;
}
