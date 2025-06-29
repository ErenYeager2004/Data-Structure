#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void ReverseQueue(queue<int>&q){
    if(q.empty()) return;

    int var = q.front();
    q.pop();
    ReverseQueue(q);
    q.push(var);
}

void ReverseQueueUsingStack(queue<int>&q){
    stack<int>st;
    while(!q.empty())
    {
        int var = q.front();
        st.push(var);
        q.pop();
    }

    while(!st.empty()){
        int var = st.top();
        q.push(var);
        st.pop();
    }
}

int main(){
    queue<int> Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);

   // ReverseQueue(Q);
   ReverseQueueUsingStack(Q);

    while(!Q.empty()){
        cout<<Q.front()<<" ";
        Q.pop();
    }
}
