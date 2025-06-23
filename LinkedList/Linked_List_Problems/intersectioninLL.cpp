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

auto getLength(Node* head){
    Node* temp = head;
    int length = 0;

    while(temp!=nullptr){
        length++;
        temp = temp->next;
    }

    return length;
}

auto moveHeadByK(auto head, auto k){
    auto ptr = head;
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}

Node* getIntersection(auto* head1,auto* head2){
   //step1: calculate lengths of both linked lists
    auto l1 = getLength(head1);
    auto l2 = getLength(head2);

    //step2: find difference k between linkedlist and move longer linkedlist ptr by k steps
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){ //ll1 is longer
        auto k = l1-l2;
        ptr1 = moveHeadByK(head1,k);
        ptr2 = head2;
    }
    else{ //ll2 will be longer
        auto k = l2-l1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2,k);
    }

    //step3: compare pt1 and ptr2;
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

    }

    return NULL;
}


int main() {
    LinkedList ll1;
    LinkedList ll2;

    ll1.insertEle(1);
    ll1.insertEle(2);
    ll1.insertEle(3);
    ll1.insertEle(4);
    ll1.insertEle(5);
    // ll1: 1 -> 2 -> 3 -> 4 -> 5 -> X

    ll2.insertEle(6);
    ll2.insertEle(7);
    // ll2: 6 -> 7

    // Connect node 7 to node 4 of ll1
    ll2.head->next->next = ll1.head->next->next->next; // pointing to node with val=4
    // Final ll2: 6 -> 7 -> 4 -> 5 -> X

    Node* intersection = getIntersection(ll1.head, ll2.head);

    if (intersection) {
        cout << "Intersection at node with value: " << intersection->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }
}
