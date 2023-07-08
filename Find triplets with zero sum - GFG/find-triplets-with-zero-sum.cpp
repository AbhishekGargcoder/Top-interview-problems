//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
  bool find(int arr[],int n, int l, int h, int sum){
      unordered_set<int>hs;
      while(l<=h){
          if(hs.count(sum-arr[l]))
              return true;
          
          else{
              hs.insert(arr[l]);
          }
          l++;
      }
      return false;
  }
  
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        for(int i=0;i<n;i++){
            int sum=0-arr[i];
            int l=i+1, h=n-1;
            if(find(arr,n,l, h, sum))
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends