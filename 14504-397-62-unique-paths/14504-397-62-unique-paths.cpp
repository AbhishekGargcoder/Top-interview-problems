class Solution {
public:
  int uniquePaths(int m, int n) {

      vector<int>temp(n, 0);
    for(int i=0;i<m;i++) {
     
       for(int j=0;j<n;j++){
         if(i==0&&j==0)
           temp[j]=1;
         else{
         int up = temp[j];
         int left = 0;
        if(j>0)
           left = temp[j-1];
         temp[j]=up+left;}
            
        }
    
     }
      return temp[n-1];
              
            
            
            
            
        
    }
};