//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        Node* temp1=head1,*temp2=head2,*temp=NULL,*res=NULL,*pre=NULL,*ne=NULL;
        while(temp1 && temp1->data==0)temp1=temp1->next;
        head1=temp1;
        while(temp2 && temp2->data==0)temp2=temp2->next;
        head2=temp2;
        int l1=0,l2=0;
        //if one them become NULL after removing starting zeroes;
        if(temp1==NULL && temp2)return temp2;
        if(temp2==NULL && temp1)return temp1;
        //finding lengths of lists;
        while(temp1){
            l1++;
            temp1=temp1->next;
        }
        while(temp2){
            l2++;
            temp2=temp2->next;
        }
        //when both become NULL
        if(l1==0 && l2==0){//when both lists has  0's  only;
            Node *nn=new Node(0);
            return nn;
        }
        //when lenghs are equal big list will find on the basis of starting digits
        // when starting digits are same then based on first different digit big list will find ;
        int startDigit1=head1->data;
        int startDigit2=head2->data;
        if(l1==l2){
            temp1=head1,temp2=head2;
            int cnt=0;
            while(temp1 && temp1->data==temp2->data){//runs until digits same and list not NULL
                cnt++;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            if(cnt==l1){//when both lists have same values then ans is 0;
                Node *nn=new Node(0);
                return nn;
            }
            startDigit1=temp1->data;
            startDigit2=temp2->data;
        }
        
        //reversing head1;
        temp1=head1,temp2=head2;
        while(temp1->next){
            ne=temp1->next;
            temp1->next=pre;
            pre=temp1;
            temp1=ne;
        }
        temp1->next=pre;
        head1=temp1;
        //reversing head2;
        pre=NULL,ne=NULL;
        while(temp2->next){
            ne=temp2->next;
            temp2->next=pre;
            pre=temp2;
            temp2=ne;
        }
        temp2->next=pre;
        head2=temp2;
        
        //making smallest as head2 and biggest as head1;
        if(l1<l2){//big list based on length 
            temp=head2;
            head2=head1;
            head1=temp;
        }
        else if(l1==l2){//when are equal , based on first different digit;
            if(startDigit1<startDigit2){
                temp=head2;
                head2=head1;
                head1=temp;
            }
        }
        
        //substration in reverse lists upto smallest list length;
        temp1=head1,temp2=head2,temp=NULL;
        while(temp1 && temp2){//at certain instance temp2 will NULL as it is small list;
            int first=temp1->data , second = temp2->data;
            if(first>=second){
                temp1->data=first-second;
            }
            else{
                //no use of x but use of recursion as it taking borrow from prev node  
                //and modified present nodes during backtracking ;
                //int x=recursionForBorrow();       //no need to store x because list is modified during recursion as it is return type recursion iam storing 
                
                temp=temp1->next;// present big list location;
                while(temp->data==0){//this is used to make all prev zeroes as 9's   and >0 as digit-1;
                    temp->data=9;
                    temp=temp->next;
                }
                temp->data=temp->data-1;//the digit which gave one;
                
                temp1->data=temp1->data+10;//modifing temp1->data by borrow
                
                //now subtraction
                temp1->data=(temp1->data)-(temp2->data);//subtraction
            }
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        //substraction upto same length parts of both lists;
        //head1 has some nodes extra which will be added directly result  as they have connection no need to add 
        
        //reversing the head1 which is the result;
        pre=NULL,ne=NULL;
        temp1=head1;
        while(temp1->next){
            ne=temp1->next;
            temp1->next=pre;
            pre=temp1;
            temp1=ne;
        }
        temp1->next=pre;
        head1=temp1;
        //removing starting zeroes from result as they come during borrowing or when they have same starting digits
        while(temp1 && temp1->data==0){
            temp1=temp1->next;
        }
        head1=temp1;
        if(head1==NULL){
             Node *nn=new Node(0);
                return nn;
        }
        return head1;
    }
};

//{ Driver Code Starts.

// prints the elements of linked list starting with head
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);
    }

    return 0;
}

// } Driver Code Ends