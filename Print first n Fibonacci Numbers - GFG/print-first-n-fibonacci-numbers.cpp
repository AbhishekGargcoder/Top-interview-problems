//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        long long prev = 1,pprev=1;
        vector<long long >v;
        if(n==0) return v;
        v.push_back(pprev);
        if(n==1) return v;
        v.push_back(prev);
        if(n<=2){
            return v;
            
        }   
        for(int i=3;i<=n;i++){
            v.push_back(prev+pprev);
           
            long long temp=pprev;
            pprev = prev;
            prev = prev + temp;
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends