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


void delete_duplicate(Node *head){
    Node *current = head;
   // while(current!=nullptr ){
    //    while(current->next!=nullptr && current->val==current->next->val){
    //        Node *temp = current->next;
    //        current->next=current->next->next;
     //      delete(temp);
    //    }
    //    current=current->next;
   // }

   //2nd approach
   while(current!=nullptr && current->next!=nullptr)
   {
    if(current->val==current->next->val)
        {
            Node* temp = current->next;
            current->next=current->next->next;
            delete(temp);
        }
        current=current->next;
   }
}

int main(){
    LinkedList ll;
    ll.insertEle(1);
    ll.insertEle(2);
    ll.insertEle(2);
    ll.insertEle(3);
    ll.insertEle(3);
    ll.insertEle(4);
    ll.display();
    delete_duplicate(ll.head);
    ll.display();
}
