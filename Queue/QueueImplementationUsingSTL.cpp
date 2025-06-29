#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);

    Q.pop();

    while(!Q.empty()){
        cout<<Q.front()<< " ";
        Q.pop(); 
    }
}