//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    bool binarySearch(int target,vector<vector<int>>&mat2){
        int l=0,h=(mat2.size())*(mat2.size()),mid;
        while(l<=h){
            mid=(l+h)/2;
            int i=(mid/(mat2.size()));
            int j=(mid%(mat2.size()));
            if(i<0 || i>=mat2.size())return false;
            if(j<0 || j>= mat2.size())return false;
            if(target==mat2[i][j])return true;
            else if(target>mat2[i][j])l=mid+1;
            else h=mid-1;
        }
        return false;
    }
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x){
	   // vector<vector<int>>con(mat1.size(),vector<int>(mat1.size(),-1));
	   //int end=(mat1.size())
	   int res=0;
	    for(int i=0;i<mat1.size();i++){
	        for(int j=0;j<mat2.size();j++){
	            if(binarySearch(x-mat1[i][j],mat2))res++;
	        }
	    }
	    return res;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends