//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** headRef, struct Node** tailRef, int newData) {
    struct Node* new_node = new Node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
    }

    else {
        (*tailRef)->next = new_node;
    }
    *tailRef = new_node;
}

void printList(struct Node* head) {
    while (head) {
        cout << head->data << ' ';
        head = head->next;
    }
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
  public:
  int lb=-1,ub=-1;
    //  void binarySearch(vector<int>&con,int target,int l,int h,int lowUppBond){
    //      if(l>h)return;
    //     int mid=(l+h)/2;
    //     if(con[mid]==target){
    //         if(lowUppBond==1){
    //             lb=mid,ub=mid;
    //             binarySearch(con,target,l,mid-1,2);//lowerbound;
    //             binarySearch(con,target,mid+1,h,3);//upperbound;
    //         }
    //         else if(lowUppBond==2){//lower bond
    //             if(lb==mid)return ;
    //             lb=mid;
    //             binarySearch(con,target,l,mid-1,2);
    //         }
    //         else{//upper bond
    //             if(ub==mid)return;
    //             ub=mid;
    //             binarySearch(con,target,mid+1,h,3);
    //         }
    //     }
    //     else{
    //         if(lowUppBond==2){//lower bond
    //             binarySearch(con,target,mid+1,h,2);
    //         }
    //         else if(lowUppBond==3){//upper bond
    //             binarySearch(con,target,l,mid-1,3);
    //         }
    //         else{
    //             if(con[mid]>target)binarySearch(con,target,l,mid-1,1);
    //             else binarySearch(con,target,mid+1,h,1);
    //         }
    //     }
    // }
    bool binarySearch(vector<int>&con,int target){
        int l=0,h=con.size()-1,mid;
        while(l<=h){
            mid=(l+h)/2;
            if(con[mid]==target)return true;
            else if(con[mid]<target)l=mid+1;
            else h=mid-1;
        }
        return false;
    }
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        vector<int>con;
        Node *temp=head2;
        while(head2){
            con.push_back(head2->data);
            head2=head2->next;
        }
        head2=temp;
        sort(con.begin(),con.end());
        int res=0;
        temp=head1;
        while(head1){
            if((x-(head1->data))>0){
                // lb=-1,ub=-1;
                // binarySearch(con,x-head1->data,0,con.size()-1,1);
                // if(lb!=-1)res+=(ub-lb+1);
                if(binarySearch(con,x-(head1->data))){
                    res++;
                    // cout<<(head1->data)<<" ";
                }
            }
            head1=head1->next;
        }
        head1=temp;
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        struct Node* head1 = NULL;
        struct Node* tail1 = NULL;
        struct Node* tail2 = NULL;
        struct Node* head2 = NULL;
        int n1, n2, tmp, x;
        cin >> n1;
        while (n1--) {
            cin >> tmp;
            append(&head1, &tail1, tmp);
        }
        cin >> n2;
        while (n2--) {
            cin >> tmp;
            append(&head2, &tail2, tmp);
        }
        cin >> x;
        Solution obj;
        cout << obj.countPairs(head1, head2, x) << '\n';
    }
    return 0;
}
// } Driver Code Ends