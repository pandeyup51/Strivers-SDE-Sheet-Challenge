#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
     vector<long long int>v1,v3;
        vector<vector<long long int>>v2;
          v1.push_back(1);
           v2.push_back(v1);
          if (n == 1) {
            // v2.push_back(v1);
            return v2;
          }
            v1.push_back(1);
            v2.push_back(v1);
          if (n == 2) {
          
           
            return v2;
          }
     for(int i=3;i<=n;i++){
                v3.push_back(1);
             for(int i=0;i<v1.size()-1;i++){
                   v3.push_back(v1[i]+v1[i+1]);
             }
             v3.push_back(1);
             v1.clear();
             v2.push_back(v3);
             v1=v3;
             v3.clear();
         }
         return v2;
}
