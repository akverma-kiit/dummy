#pragma once
#ifndef LLINKLISTUTILITY_H

#include < stdlib.h>
#include <malloc.h>
#include <stdio.h>

typedef struct node
{
  int data;
  struct node *next;
} Node;

typedef enum insertType
{
  INS_ENDING   = 0,
  INS_BEGINING = 1,
  INS_POSITION,
} insType;

typedef enum deleteType
{
  DEL_ENDING   = 0,
  DEL_BEGINING = 1,
  DEL_POSITION,
  DEL_VALUE,
} delType;

//Insertion
Node *insertNode(Node *list, int Position, int value, insType type);

//Deletion
Node *deleteNode(Node *list, int Position, int value, insType type);

//Display & Traversal
void printNode(char *message, Node *Pointer, int nodePos);
void printLinkList(Node *list, int nodePrint);

//Get Node or Node Value
Node *pointNodeAtPos(Node *list, int Position);
int valueOfNodeAtPos(Node *list, int Position);

#endif // !LLINKLISTUTILITY_H
