#include<iostream>
using namespace std;
class Node{
  public :
  int data;
  Node* left;
  Node* right;

  public :
  Node(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
};

void preOrder(Node* root){
  if(root == nullptr) return;
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(Node* root) {
  if(root == nullptr) return;

  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void postOrder(Node* root) {
  if(root == nullptr) return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->left->right->left = new Node(6);
  root->right = new Node(3);
  root->right->left = new Node(7);
  root->right->right = new Node(8);
  root->right->right->left = new Node(9);
  root->right->right->right = new Node(10);

  preOrder(root);
  cout<<endl;
  inOrder(root);
  cout<<endl;
  postOrder(root);
}
