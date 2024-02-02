//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int res=0,neg=0;
        for(int i=0;i<s.size();i++){
            if(i==0 && s[i]=='-')neg=1;
            else if(s[i]>='0' && s[i]<='9'){
                res=res*10+(s[i]-'0');
            }
            else return -1;
        }
        if(neg==1)res*=-1;
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends