#include<iostream>
using namespace std;

class Node{

    public:
        int val;
        Node* next;

        Node(int data){
            val = data;
            next = nullptr;
        }
};

void insertAtHead(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void display(Node* head){

    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"X"<<endl;
    
}

void insertAtTail(Node* &head,int val){
    Node* new_node = new Node(val);

    Node* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;

    }
    temp->next=new_node;
}

int main(){
    Node* head = nullptr;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    
    display(head);
    insertAtTail(head,10);
    display(head);

    //cout<<n->val<<" "<<n->next;
}