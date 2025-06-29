#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vt;

class Queue{
    int front;
    int back;
    vt queue;
    public :
        Queue(){
            this->front = this->back = -1;
        }
    
    void enqueue(int data){
        this->queue.push_back(data);
        this->back++;
        if(this->back == 0){
            this->front++;
        }
    }

    void dequeue(){
        if(this->front == this->back){
            this->front = this->back = -1;
            this->queue.clear();
        }
        else{
            this->front++;
        }
    }

    int Front(){
        if(this->front == -1) return -1;
        return this->queue[this->front];
    }

    void display() {
        if (this->front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = this->front; i <= this->back; i++) {
            cout << this->queue[i] << " ";
        }
        cout << endl;
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