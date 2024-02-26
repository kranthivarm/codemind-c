//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void combinations(string &s,string &temp,int ind ,vector<string>&res){
	        if(ind>=s.size())return ;
	        temp+=s[ind];
	        res.push_back(temp);
	        combinations(s,temp,ind+1,res);
	        temp.pop_back();
	        combinations(s,temp,ind+1,res);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    string temp="";
		    vector<string>res;
		    combinations(s,temp,0,res);
		    sort(res.begin(),res.end());
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends