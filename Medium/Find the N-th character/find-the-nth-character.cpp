//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        while(r--){
            int l;
            if(n>s.size())l=s.size();
            else if(n%2)l=(n/2)+2;
            else l=(n/2)+1;
            string temp="";
            for(int i=0;i<l;i++){
                if(s[i]=='1')temp+="10";
                else temp+="01";
            }
            s=temp;
        }
        // cout<<s<<endl;
        return s[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends