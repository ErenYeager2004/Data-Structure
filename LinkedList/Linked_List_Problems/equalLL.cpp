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

bool checkEqualLinkedlist(Node* head1,Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1!=nullptr && ptr2!=nullptr){
        if(ptr1->val != ptr2->val){
            return false;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return (ptr1 == nullptr && ptr2 == nullptr);
}

int main(){

    LinkedList ll1;
    LinkedList ll2;

    ll1.insertEle(1);
    ll1.insertEle(2);
    ll1.insertEle(3);
    ll1.insertEle(4);

    ll2.insertEle(1);
    ll2.insertEle(2);
    ll2.insertEle(3);
    ll2.insertEle(4);

    checkEqualLinkedlist(ll1.head,ll2.head);

}