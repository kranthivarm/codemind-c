//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    map<int,vector<int>>mp;//unique values so vector of elements
    unordered_map<int,int>burnTimeVisit;//this is used find present resCnt  and to check wheter visited or not;
    //if burnTime map is 0 then that node is not visited else value in it is res val and visited
    void recuAdjMatrix(Node *root){
        if(root){
            int x=-1,y=-1;
            if(root->left)x=root->left->data;
            if(root->right)y=root->right->data;
                if(x!=-1){
                    mp[root->data].push_back(x);
                    mp[x].push_back(root->data);
                }
                if(y!=-1){
                    mp[root->data].push_back(y);
                    mp[y].push_back(root->data);
                }
            recuAdjMatrix(root->left);
            recuAdjMatrix(root->right);
        }
    }
    
    void adjMatTraverse(int target){
        // if(burnTimeVisit[target]==0)return;
        // burnTimeVisit[target]=1;
        vector<int>temp=mp[target];
        for(int i=0;i<temp.size();i++){
            if(burnTimeVisit[temp[i]]==0){
                // if(burnTimeVisit[target]==-1)burnTimeVisit[target]=1;
                // else 
                burnTimeVisit[temp[i]]=burnTimeVisit[target]+1;
                adjMatTraverse(temp[i]);
            }
            else continue;
        }
    }
    int minTime(Node* root, int target) {
        // Adjacent matrix;
        recuAdjMatrix(root);
        burnTimeVisit[target]=1;
        adjMatTraverse(target);
        int res=-1;//it is the answer;
        //max in burnTimevist is the anwer as it is the no of moves;
        for(auto it:burnTimeVisit){
            // cout<<it.first<<" "<<it.second<<endl;
            res=max(res,it.second);
        }
        return res-1;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends