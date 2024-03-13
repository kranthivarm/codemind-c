//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat){
         vector<int>res;
         int st,end,x=0,n=mat.size();
         for(int i=0;i<n;i++){
             if(x==0){
                 int row=i;
                 for(int j=0;j<=i;j++)    res.push_back(mat[row--][j]);
                 x=1;
             }
             else{
                 int row=0;
                 for(int j=i;j>-1;j--)  res.push_back(mat[row++][j]);
                 x=0;
             }
         }
         for(int i=1;i<n;i++){
             if(x==1){
                 int row=n-1;
                 for(int j=i;j<n;j++)  res.push_back(mat[j][row--]);
                 x=0;
             }
             else{
                 int row=i;
                 for(int j=n-1;j>=i;j--)  res.push_back(mat[j][row++]);
                 x=1;
             }
         }
         return res;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends