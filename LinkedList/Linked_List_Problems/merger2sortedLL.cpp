#include<iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

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

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "X" << endl;
    }

};

Node* mergeLists(Node* &head1, Node* &head2){
    Node* dummy = new Node(0);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummy;

    while(ptr1 && ptr2){
        if(ptr1->val < ptr2->val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 =ptr2->next;
        }

        ptr3 = ptr3->next;
    }

    if(ptr1){
        ptr3->next = ptr1;
    }
    else{
        ptr3->next = ptr2;
    }

    return dummy->next;
}

int main(){
    LinkedList ll1;
    ll1.insertEle(1);
    ll1.insertEle(4);
    ll1.insertEle(5);
    ll1.display();

    LinkedList ll2;
    ll2.insertEle(2);
    ll2.insertEle(3);
    ll2.display();
    
    LinkedList ll3;
    ll3.head = mergeLists(ll1.head,ll2.head);

    ll3.display();
}
