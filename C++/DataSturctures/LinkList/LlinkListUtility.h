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

Node *insertNode(Node *list, int value, insType type);
void printLinkList(Node *list);

#endif // !LLINKLISTUTILITY_H
