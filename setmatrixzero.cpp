#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	
	int n=matrix.size();
	int m=matrix[0].size();
	// cout<<n<<m<<endl;
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		cout<<matrix[i][j];
	// 	}
	// }
	// cout<<endl;
	vector<vector<int>>(n,vector<int>(m,-1));
	vector<pair<int,int>>v1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
                 if(matrix[i][j]==0){
					 v1.push_back({i,j});
				 }
		}
	}
	for(int i=0;i<v1.size();i++){
		  int row=v1[i].first;
		  int col=v1[i].second;
		  int max1=max(n,m);
		  for(int j=0;j<max1;j++){
              if(j<m){
			  matrix[row][j]=0;
			  }
			  if(j<n){
				  matrix[j][col]=0;
			  }
		  }

	}
	
	return ;
}