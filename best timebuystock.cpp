#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    // Write your code here.
    vector<int>stock;
    int min1=arr[0];
      
    for(int i=1;i<arr.size();i++ ){
          if(min1>arr[i]){
              min1=arr[i];
          }
          stock.push_back(arr[i]-min1);
    }
    int max=*max_element(stock.begin(),stock.end());
    return max;

}