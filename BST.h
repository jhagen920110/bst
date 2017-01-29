#pragma once
#include "Node.h"

class BSTree
{
  public:
  Node* root;
  BSTree(Node*);
  bool empty();
  bool search(Node *root, int key);
  void insert(Node *root, Node * n);
  void remove(Node *n);
  void inorder(Node *r);
  void preorder(Node *r);
  void postorder(Node *r);
};
