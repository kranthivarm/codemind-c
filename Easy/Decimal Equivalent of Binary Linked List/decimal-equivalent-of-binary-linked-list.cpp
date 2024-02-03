//{ Driver Code Starts
// Program to check if linked list is empty or not
#include<iostream>
using namespace std;
const long long unsigned int MOD = 1000000007;

/* Link list Node */
struct Node
{
    bool data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


// } Driver Code Ends
/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
          // Your Code Here
          
          //this is correct but overflow will come at 1<<len-1
          
        //   Node * temp=head;
        //   int len=0;
        //   string s="";
        //   long long unsigned int res=0;
        //   while(temp){
        //       len++;
        //       temp=temp->next;
        //   }
        //   temp=head;
        //   while(temp){
        //       if(temp->data)res=(res+(1<<(len-1)))%1000000007;
        //       len--;
        //       temp=temp->next;
        //   }
        //   return res;
            Node *temp=head,*pre=NULL,*ne=NULL;
            //reversing head;
            while(temp->next){
                ne=temp->next;
                temp->next=pre;
                pre=temp;
                temp=ne;
            }
            temp->next=pre;
            head=temp;
            long long int res=0,pow=1;
            while(temp){
                if(temp->data)res=(res+pow)%1000000007;
                pow=pow<<1;
                pow=pow%1000000007;
                temp=temp->next;
            }
            return res;
        }
};


//{ Driver Code Starts.

void append(struct Node** head_ref, struct Node **tail_ref, bool new_data)
{

    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


bool isEmpty(struct Node *head);

/* Driver program to test above function*/
int main()
{
    bool l;
    int i, n, T;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        Solution obj;
        cout << obj.decimalValue(head) << endl;
    }
    return 0;
}
// } Driver Code Ends