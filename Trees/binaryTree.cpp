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
    cout << "Enter data for node: ";
    int data;
    cin >> data;

    if(data == -1){
        return nullptr;
    }

    root = new Node(data);

    cout << "Enter data for left of " << data << endl;
    root->left = createTree(root->left);

    cout << "Enter data for right of " << data << endl;
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

void PreOrder(Node* root){
    if(root == nullptr){
        return;
    }

    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
int main(){
    Node* root = nullptr;

    root = createTree(root);

    //levelOrderTraversal(root);
    PreOrder(root);
}