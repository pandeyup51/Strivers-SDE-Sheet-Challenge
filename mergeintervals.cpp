#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
       int m=intervals.size();
            vector<pair<int,int>>v2,v3;
            for(int i=0;i<m;i++){
                 v2.push_back({intervals[i][0],intervals[i][1]});
            }
            sort(v2.begin(),v2.end());
            for(int i=1;i<v2.size();i++){
                  if(v2[i-1].second>=v2[i].second){
                        v2[i].first=v2[i-1].first;
                        v2[i].second=v2[i-1].second;
                  }
                 else if(v2[i-1].second<v2[i].second&&v2[i-1].second>=v2[i].first){
                       v2[i-1].second=v2[i].second;
                       v2[i].first=v2[i-1].first;
                 }
               
            }
            map<int,int>ma1;
            for(int i=0;i<v2.size();i++){
                ma1[v2[i].first]=v2[i].second;
            }
            vector<vector<int>>v4;
            vector<int>v1;
            for(auto x:ma1){
                v1.push_back(x.first);
                v1.push_back(x.second);
                v4.push_back(v1);
                v1.clear();
            }
            
            return v4;
}
