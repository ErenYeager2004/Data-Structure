#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class Stacks{
    Node* head;
    int capacity;
    int current_size;
public:
    Stacks(int c){
        capacity=c;
        current_size=0;
        head=NULL;
    }

    bool isempty(){
        return head==NULL;
    }

    bool isfull(){
        return current_size==capacity;
    }

    void push(){
        if(isfull()){
            cout<<"stack is full / overflow\n";
            return;
        }
        else{
            cout<<"Enter data:";
            int data;
            cin>>data;
            Node* newnode = new Node;
            newnode-> data = data;
            newnode-> next = head;
            head = newnode;
            current_size++;
        }
    }

    void pop(){
        if(isempty()){
            cout<<"Stack empty"<<endl;
            return;
        }
        else{
            Node* newhead=head->next;
            head->next=NULL;
            delete head;
            head=newhead;
        }
    }

    void display(){
        if(isempty()){
            cout<<"stack empty"<<endl;
            return;
        }
        else{
            Node* temp=head;
            while (temp!=NULL)
            {
                cout<<temp->data<<"-->";
                temp=temp->next;
            }
            cout<<"X\n";
        }
    }

    void gettop(){
        if(isempty()){
            cout<<"empty stack\n";
            return;
        }
        else{
            cout<<"top element is "<<head->data<<endl;
        }
    }

    void menu(){
        int ch;
        cout<<"\t*******************\n";
        cout<<"\t1 push";
        cout<<"\n\t2 pop";
        cout<<"\n\t3 display";
        cout<<"\n\t4 display top element";
        cout<<"\n\t5 Exit";
        cout<<"\n\nEnter a choice :";
        cin>>ch;

        try{
            if(ch<=5){
                if(ch==1){
                    push();
                    menu();
                }
                if(ch==2){
                    pop();
                    menu();
                }
                if(ch==3){
                    display();
                    menu();
                }
                if(ch==4){
                    gettop();
                    menu();
                }
                if(ch==5){
                    exit(0);
                }
            }
            else{
                throw(ch);
            }
        }
        catch(...){
            cout<<"entered a wrong choice!!!"<<endl;
            menu();
        }
    }

};

int main(){
    Stacks st(6);
    st.menu();

}
