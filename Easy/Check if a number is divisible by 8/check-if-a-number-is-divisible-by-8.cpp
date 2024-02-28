//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        // if last 3 digits (num) is divisible by then n is divisible by 8;
        if(s[0]=='-')s[0]='0';
        int n;
        if(s.size()<=3)    n=stoi(s);
        else {
            int l=s.size();
            string num="";
            num+=s[l-3];
            num+=s[l-2];
            num+=s[l-1];
            n=stoi(num);
        }
        if(n%8==0)return 1;
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends