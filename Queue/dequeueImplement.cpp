#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>Q;
    Q.push_back(10);
    Q.push_back(20);
    Q.push_back(30);
    Q.push_front(0);

    for(int i:Q){
        cout<<i<<" ";
    }
}