#pragma once
#ifndef BSTUTILITY_H

#include < stdlib.h>
#include <malloc.h>
#include <stdio.h>

typedef struct node
{
  int data;
  struct node *leftChild;
  struct node *rightChild;
} Node;

typedef enum traversaType
{
  PRE_ORDER = 0,
  IN_ORDER,
  POST_ORDER,
} tType;

typedef enum deleteType
{
  DEL_ENDING   = 0,
  DEL_BEGINING = 1,
  DEL_POSITION,
  DEL_VALUE,
} delType;

//Insertion
Node *insertNode(Node *Root, int value);

//Display & Traversal
void printBST(Node *Root, tType order);

//Deletion
//Node *deleteNode(Node *list, int Position, int value, insType type);

//Get Node or Node Value
//Node *pointNodeAtPos(Node *list, int Position);
//int valueOfNodeAtPos(Node *list, int Position);

#endif // !BSTUTILITY_H
