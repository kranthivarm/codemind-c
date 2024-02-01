//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        vector<bool>res(26,false);
        for(int i=0;i<s.size();i++){
            int ind=-1;
            //storing both upper and lower case at same ind
            if(s[i]>='a'  &&s[i]<='z')   ind=s[i]-'a';
            if(s[i]>='A'  &&s[i]<='Z')   ind=s[i]-'A';
            if(ind!=-1)  res[ind]=true;
        }
        for(int i=0;i<26;i++)if(res[i]==false)return false;
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends