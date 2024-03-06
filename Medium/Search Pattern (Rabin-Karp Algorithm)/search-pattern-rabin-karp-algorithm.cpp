//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            if(pattern.size()==text.size()){
                if(pattern != text)return {};
                else return {1};
            }
            vector<int>res;
            for(int i=0;i<text.size()-pattern.size()+1;i++){
                if(text[i]==pattern[0]){
                    int j=1;
                    for(j=1;j<pattern.size();j++){
                        if(text[i+j]!=pattern[j])break;
                    }
                    if(j==pattern.size())res.push_back(i+1);
                }
            }
            return res;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends