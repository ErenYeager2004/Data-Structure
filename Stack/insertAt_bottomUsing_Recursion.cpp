#include<bits/stdc++.h>
using namespace std;

void inserAtbottom(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int ele=st.top();
    st.pop();
    inserAtbottom(st,x);
    st.push(ele);

}


int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    inserAtbottom(st,5);
    while(not st.empty()){
        int x=st.top();
        st.pop();
        cout<<x<<"\n";
    }
}