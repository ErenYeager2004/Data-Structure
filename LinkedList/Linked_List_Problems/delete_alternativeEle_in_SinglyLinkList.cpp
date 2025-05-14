#include <iostream>
using namespace std;

// Problem statement

// given the head of a linked list, delete every alternative element from the list starting from the second element

// 1 -> 2 -> 3 -> 4 -> 5 ->nullptr
// loop => curr->next!=nullptr || cur==nullptr
// temp = cur->next
// cur = head;
// cur->next = cur->next->next
// delete temp
// cur=cur->next

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

void deleteAlternative(Node* head){
        Node* current = head;

        while(current!=nullptr && current->next!=nullptr){
            Node* temp = current->next;
            current->next=current->next->next;
            delete(temp);
            current=current->next;
        }
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
    deleteAlternative(ll.head);
    ll.display();
}