#include<bits/stdc++.h>
using namespace std;

//void insertAtanyIDX(stack<int>&st,int x,int IDX){
    //stack<int>temp;
   // int count=0;
  //  int n=st.size();
  //  while(count<n-IDX){
 //       count++;
   //     int ele=st.top();
   //     st.pop();
  //      temp.push(ele);
   // }
 //   st.push(x);
  //  while(not temp.empty()){
 //       int ele=temp.top();
   //     temp.pop();
  //      st.push(ele);
  //  }
//}

void insertIDX(stack<int>&st,int x,int IDX){
    
    if(st.size()==IDX){
        st.push(x);
        return;
    }
    int ele=st.top();
    st.pop();
    insertIDX(st,x,IDX);
    st.push(ele);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertIDX(st,5,1);
    while(not st.empty()){
        int x=st.top();
        st.pop();
        cout<<x<<"\n";
    }
    return 0;
}