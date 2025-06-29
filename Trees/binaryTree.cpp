#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* right;
        Node* left;
    
    Node(int val){
        data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* createTree(Node* root){
    cout<<"Enter data for node :";
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return nullptr;
    }

    cout<<"Enter data for left "<<root->data;
    root->left = createTree(root->left);
    cout<<"Enter data for right of "<<root->data;
    root->right = createTree(root->right);


    return root;
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp -> data <<" ";
        q.pop();
    
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
int main(){
    Node* root = nullptr;

    root = createTree(root);

    levelOrderTraversal(root);
}