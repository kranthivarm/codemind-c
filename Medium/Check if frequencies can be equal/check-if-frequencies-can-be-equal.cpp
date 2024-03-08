//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s){
	    vector<int>con(26,0);
	    for(char i:s){
	        int x=i-'a';
	        con[x]++;
	    }
	    unordered_map<int,int>mp;
	    for(int i:con){
	        if(i!=0)mp[i]++;
	       // cout<<i<<" ";
	    }
	   // cout<<endl;
	    if(mp.size()==1)return true;
	    if(mp.size()!=2)return false;
	    int x=0,ma=-1,mi=1000000;
	    for(auto i:mp){
	        con[x++]=i.first;
	        if((i.first)>ma)ma=i.first;
	        if((i.first)<mi) mi=i.first;
	    }
	    
	    if(mp[ma]>1 and mi==1 and mp[mi]==1)return true;
	    if(mp[ma]>1)return false;
	    if(mp[ma]==1 or mp[mi]==1){
	        if((con[0]==1 || con[1]==1) || abs(con[0]-con[1])==1)return true;
	    }
	    return false;
	}
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends