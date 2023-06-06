#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &matrix, int g, int m)
{
        vector<vector<int>>mat2(g,vector<int>(m,1999999));
         int intial_row=0,intial_colm=0;
         int final_row=g-1,final_colm=m-1;
            
         
      while(intial_row<final_row&&intial_colm<final_colm){
                   for(int i=intial_colm;i<final_colm;i++){
                        
                         mat2[intial_row][i+1]=matrix[intial_row][i];
                   }
                   for(int i=intial_row;i<final_row;i++){
                       mat2[i+1][final_colm]=matrix[i][final_colm];
                   }
                   for(int i=final_colm;i>intial_colm;i--){
                       mat2[final_row][i-1]=matrix[final_row][i];
                   }
                   for(int i=final_row;i>intial_row;i--){
                       mat2[i-1][intial_colm]=matrix[i][intial_colm];
                   }
                   intial_row++;
                   final_colm--;
                   intial_colm++;
                   final_row--;

      }
      for(int i=0;i<g;i++){
          for(int j=0;j<m;j++){
            if (mat2[i][j] != 1999999) {
              matrix[i][j] = mat2[i][j];
            }
          }
      }
      return ;
}