//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        vector<int>fre(26,0);
        for(auto i:s){
            int x=i-'a';
            fre[x]++;
        }
        priority_queue<int>pq;
        for(int i=0;i<26;i++)pq.push(fre[i]);
        while(k){
            int x=pq.top();
            x--;
            pq.pop();
            pq.push(x);
            k--;
        }
        int res=0;
        while(pq.size()){
            int x=pq.top();
            res+=x*x;
            pq.pop();
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends