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

void removeKthnodeFromEnd(Node* head,int k){
    Node* ptr1 = head;
    Node* ptr2 = head;

    int count = k;
    while(count--){
        ptr2 = ptr2->next;
    }

    if(ptr2 == nullptr){
        //k is equal to the length of the linklist
        Node* temp = head;
        head = head->next;
        delete(temp);
        return;
    }
    while(ptr2->next != nullptr){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;       
    }

    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    delete(temp);
}

int main(void){
    LinkedList ll;
    ll.insertEle(1);
    ll.insertEle(2);
    ll.insertEle(3);
    ll.insertEle(4);
    ll.insertEle(5);
    ll.insertEle(6);
    ll.display();

    removeKthnodeFromEnd(ll.head,3);
    ll.display();
}
