//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    vector<int>con(26,0);
	    for(char i: str){
	        int x;
	        if(i>= 'a' and i<= 'z' ){
	            x=i- 'a' ;
	            if(con[x]==0 || con[x]==2)con[x]++; //adding 1 for lower letters 
	        }
	        else {
	            x=i- 'A' ;
	            if(con[x]==0 || con[x]==1)con[x]+=2;//adding 2 for uppercase letters
	        }
	    }
	    string res="";
	    for(char i:str){
	        int x;
	        if(i>= 'a' and i<= 'z' ){
	            x=i- 'a' ;
	            if(con[x]==1 || con[x]==3){
	                res+=i;
	                con[x]--;//decresing by 1;
	            }
	        }
	        else {
	            x=i- 'A' ;
	            if(con[x]==2 ||con[x]==3){
	                res+=i;
	                con[x]-=2;
	            }
	        }
	    }
	    return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends