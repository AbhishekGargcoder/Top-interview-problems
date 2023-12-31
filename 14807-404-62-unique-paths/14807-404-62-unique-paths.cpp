class Solution {
public:
   
    vector<vector<int>>dp;
 int f(int i,int j){
      if(i <0 || j<0) return 0;
     if(i==0&&j==0) return 1;
     if(dp[i][j]!=-1)
         return dp[i][j];
     int up = f(i-1,j);
     int left = f(i, j-1);
     return dp[i][j]= up + left;
}         
                  
        
        
  
  int uniquePaths(int r,int c) {

  /*    vector<int>temp(n, 0);
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
    
     }*/
  dp = vector<vector<int>>(r,vector<int>(c,0));
    dp[0][0]=1;
 for(int j=0;j<c;j++)
     dp[0][j]=1;
 for(int i=0;i<r;i++) dp[i][0]=1;
   for(int i=1;i<r;i++){
     for(int j=1;j<c;j++){
         
        dp[i][j]=dp[i-1][j]+dp[i][j-1];
        
         
     }
   }
     return dp[r-1][c-1];
    //  return f(r-1,c-1);
              
            
            
            
            
        
    }
};