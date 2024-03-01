//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        if(n==1)return 0;
        if(arr[0]>=arr[1])return 0;
        if(arr[n-1]>=arr[n-2])return n-1;
       for(int i=1;i<n-1;i++){
           if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])return i;
       }
       return 0;
       
    //   int left[n],right[n],leftMax=-1,rightMax=-1;
    //   for(int i=0;i<n;i++){
    //       if(leftMax==-1){
    //           left[i]=arr[i];
    //           leftMax=arr[i];
    //           rightMax=arr[n-i-1];
    //           right[i]=arr[n-i-1];
    //           continue;
    //       }
    //       if(arr[i]>leftMax){
    //           leftMax=arr[i];
    //           left[i]=arr[i];
    //       }
    //       if(arr[n-i-1]>rightMax){
    //           rightMax=arr[n-i-1];
    //           right[n-i-1]=arr[n-i-1];
    //       }
    //   }
    //   for(int i=0;i<n)
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		Solution ob;
		
		int A = ob. peakElement(tmp,n);
		
		if(A<0 and A>=n)
		    cout<<0<<endl;
		else
		{
    		if(n==1 and A==0)
    		    f=1;
    		else if(A==0 and a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 and a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] and a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		cout<<f<<endl;
		}
		
	}

	return 0;
}
// } Driver Code Ends