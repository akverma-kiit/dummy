#include "BSTUtility.h"

void preOrderTraversal(Node *Root)
{
  //printf("\n*****************\nBST PREORDER ->\t");
  if (Root != NULL)
  {
    printf("[%d]\t", Root->data);
    preOrderTraversal(Root->leftChild);
    preOrderTraversal(Root->rightChild);
  }
  //printf("\n*****************\n\n");
}

void inOrderTraversal(Node *Root)
{
  //printf("\n*****************\nBST PREORDER ->\t");
  if (Root != NULL)
  {
    inOrderTraversal(Root->leftChild);
    printf("[%d]\t", Root->data);
    inOrderTraversal(Root->rightChild);
  }
  //printf("\n*****************\n\n");
}

void postOrderTraversal(Node *Root)
{
  //printf("\n*****************\nBST PREORDER ->\t");
  if (Root != NULL)
  {
    postOrderTraversal(Root->leftChild);
    postOrderTraversal(Root->rightChild);
    printf("[%d]\t", Root->data);
  }
  //printf("\n*****************\n\n");
}

/*
typedef void (*func_t)(); // pointer to function with no args and void return
... func_t fptr;          // variable of pointer to function
... void D::setDisconnectFunc(func_t func)
{
  fptr = func;*/

void printBST(Node *Root, tType order)
{
  if (Root == NULL)
  {
    printf("\n*****************\nBST ->\t");
    printf("[WARNINIG BST IS EMPTY]\t");
    printf("\n*****************\n\n");
  }
  else if (order == PRE_ORDER)
  {
    preOrderTraversal(Root);
  }
  else if (order == IN_ORDER)
  {
    inOrderTraversal(Root);
  }
  else if (order == POST_ORDER)
  {
    postOrderTraversal(Root);
  }
  else
  {
    printf("[WARNINIG INVALID TRAVERSAL TYPE]\n");
  }
}
