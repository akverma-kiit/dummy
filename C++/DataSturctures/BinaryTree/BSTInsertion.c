#include "BSTUtility.h"

Node *createNode(int value)
{
  Node *tempNode       = (Node *)malloc(sizeof(Node));
  tempNode->data       = value;
  tempNode->leftChild  = NULL;
  tempNode->rightChild = NULL;
  return tempNode;
}

Node *insertNode(Node *Root, int value)
{
  if (Root == NULL)
  {
    Node *Root = createNode(value);
    //printBST(Node *Root, tType order);
    return Root;
  }
  else
  {
    if ((Root->data) > value) //LEFT INSERTION
    {
      Root->leftChild = insertNode(Root->leftChild, value);
    }
    else if ((Root->data) < value) //RIGHT INSERTION
    {
      Root->rightChild = (Root->rightChild, value);
    }
    else
    {
      printf("[WARNINIG KEY ALREADY PRESENT IN BST]\n");
    }
    return Root;
  }
}
