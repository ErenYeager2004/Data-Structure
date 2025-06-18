#include<iostream>
#define start int main()
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

    inline void insertEle(int val)
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

    inline void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "X" << endl;
    }

    void reverse(){
        Node *prev = nullptr;
        Node *curr = head;
        Node *next = nullptr;

        while(curr!=nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    
};

start{
    LinkedList ll;
    ll.insertEle(1);
    ll.insertEle(2);
    ll.insertEle(3);
    ll.insertEle(4);
    ll.insertEle(5);
    ll.insertEle(6);
    ll.display();
    ll.reverse();
    ll.display();
}