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

void insertAtAnypos(Node* &head,int val,int pos){

    Node* temp = head;
    if(pos == 0){
        insertAtHead(head,val);
        return;
    }
    int curpos = 0;
    while (curpos!=pos-1)
    {
        temp=temp->next;
        curpos++;
    }

    Node* new_node = new Node(val);
    new_node->next=temp->next;
    temp->next=new_node;

}

void updateAtAnypos(Node* head,int val,int pos){
    Node* temp = head;
    int curpos=0;
    while (curpos!=pos){
        temp=temp->next;
        curpos++;
    }
    
    temp->val = val;
    
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

    insertAtAnypos(head,34,2);
    display(head);

    updateAtAnypos(head,33,2);
    display(head);

    //cout<<n->val<<" "<<n->next;
}