#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Queue{
    Node* head;
    Node* tail;
    int size;
public:
    Queue(){
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }

    void enqueue(int data){
        Node* newnode = new Node(data);
        if(head == nullptr){
            this->head = this->tail = newnode;
        }
        else{
            this->tail->next = newnode;
            this->tail = newnode;
        }
        this->size++;
    }

    void dequeue(){
        if(head==nullptr){
            return;
        }
        else{
            Node* oldhead = this->head;
            Node* newhead = this->head->next;
            this->head = newhead;
            if(this->head == nullptr) this->tail = nullptr;
            oldhead->next = nullptr;
            delete(oldhead);
            this->size--;
        }
    }

    int Size(){
        return size;
    }

    bool isEmpty(){
        return this->head == nullptr;
    }

    int getFront()
    {
        return this->head->data;
    }

    void display(){
        while(!isEmpty()){
            cout<<this->getFront()<<" ";
            this->dequeue();
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.dequeue();
    q.enqueue(40);
    q.display();

}