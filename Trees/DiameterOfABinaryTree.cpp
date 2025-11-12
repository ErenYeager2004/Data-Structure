#include<iostream>
#include<vector>
using namespace std;

class Node{
  public :
      int data;
      Node* left;
      Node* right;

      Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
      }
};

class BinaryTree {
  public :
  static void preOrder(Node* root) {
    if(root == nullptr) return;

    cout << root->data << "->";
    preOrder(root->left);
    preOrder(root->right);
  }

  static int diameterOfABinaryTree(Node* root) {
    vector<int> diameter(1);
    height(root, diameter);
    return diameter[0];
  }

  private:
  static int height(Node* root, vector<int>& diameter) {
    if(root == nullptr) return 0;

    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);
    diameter[0] = max(diameter[0], lh + rh);
    return 1 + max(lh, rh);
  }
};

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

  BinaryTree::preOrder(root);
  cout <<endl << BinaryTree::diameterOfABinaryTree(root);
}
