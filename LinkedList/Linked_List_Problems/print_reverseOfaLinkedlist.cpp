#include<iostream>
#include<stack>
#define st stack<int>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insertEle(int val)
    {
        Node *new_node = new Node(val);

        if (head == nullptr)
        {
            head = new_node;
            return;
        }
        // insert at tail pos

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void displayReverse(Node *head)
    {
       //using recusion 
       Node *temp = head;
       if(temp==nullptr) return;
       displayReverse(temp->next);
       cout<<temp->val<<" ";
    }

    void display(){
        displayReverse(head);
    }

    void display2(Node* head){
        st s;
        Node* temp = head;
        while(temp!=nullptr){
            s.push(temp->val);
            temp=temp->next;
        }

        //display

        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
    
};

int main(){
    LinkedList ll;
    ll.insertEle(1);
    ll.insertEle(2);
    ll.insertEle(3);
    ll.insertEle(4);
    ll.insertEle(5);
    ll.insertEle(6);
    //ll.display();
    ll.display2(ll.head);
    
}