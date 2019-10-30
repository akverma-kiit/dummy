/******************************************************************************
LinkList1.c
 * :
This file contains the 'main' function. Program execution begins ends
 * there.

*******************************************************************************/
#include "BSTUtility.h"

int main()
{
  Node *Root = NULL;
  Root       = insertNode(Root, 50);
  insertNode(Root, 30);
  insertNode(Root, 20);
  insertNode(Root, 40);
  insertNode(Root, 70);
  insertNode(Root, 60);
  insertNode(Root, 80);

  printBST(Root, PRE_ORDER);
}
