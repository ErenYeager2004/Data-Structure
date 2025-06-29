#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int>st;
    public:
        Queue(){}
    
        void push(int x){
            this->st.push(x);
        }

        void push2(int x){
            stack<int>temp;
            while(!this->st.empty()){
                temp.push(this->st.top());
                this->st.pop();
            }
            this->st.push(x);

            while(!temp.empty()){
                st.push(temp.top());
                temp.pop();
            }
        }

        void pop(){
            stack<int>temp;
            if(this->st.empty()) return;
            while (st.size()>1)
            {
                temp.push(this->st.top());
                st.pop();
            }

            this->st.pop();

            while(!temp.empty()){
                this->st.push(temp.top());
                temp.pop();
            }
            
        }

        void pop2(){
            this->st.pop();
        }

        int front(){
            stack<int>temp;
            if(this->st.empty()) return -1;
            while (st.size()>1)
            {
                temp.push(this->st.top());
                st.pop();
            }

            int result = this->st.top();

            while(!temp.empty()){
                this->st.push(temp.top());
                temp.pop();
            }

            return result;
        }

        int front2()
        {
            if(this->st.empty()) return INT_MIN;
            return this->st.top();
        }

        bool empty(){
            return this->st.empty();
        }
};

int main(){
    Queue q;
    q.push2(10);
    q.push2(20);
    q.push2(30);
    q.push2(40);
 
    //q.pop();
    q.pop2(); 

    while(!q.empty()){
        cout<<q.front2()<<" ";
        q.pop2();
    }
    
}