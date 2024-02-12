//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long long res=0,pro=0,pre=0;
        for(int i=1;i<=n;i++){
            pro=1;
            for(int j=0;j<i;j++){
                pre++;
                pro=(pro*pre)%1000000007;
            }
            res=(res+pro)%1000000007;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends