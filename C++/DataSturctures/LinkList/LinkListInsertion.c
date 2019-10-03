#include "LlinkListUtility.h"

Node *createNode(int value)
{
  Node *tempNode = (Node *)malloc(sizeof(Node));
  tempNode->data = value;
  tempNode->next = NULL;
  return tempNode;
}

Node *insertNodeBeginning(Node *list, int value)
{
  if (list == NULL)
  {
    Node *ptr1 = createNode(value);
    list       = ptr1;
    return list;
  }
  else
  {
    Node *ptr1 = createNode(value);
    ptr1->next = list;
    list       = ptr1;
    return list;
  }
}

Node *insertNodeEnding(Node *list, int value)
{
  if (list == NULL)
  {
    Node *ptr1 = createNode(value);
    list       = ptr1;
    return list;
  }
  else
  {
    Node *ptr1 = list;
    while (ptr1->next != NULL)
    {
      ptr1 = ptr1->next;
    }
    ptr1->next = createNode(value);
    return list;
  }
}

Node *insertNodePostion(Node *list, int Position, int value)
{
  if (list == NULL)
  {
    if (Position != 1)
    {
      printf("WARNINIG LINK LIST IS EMPTY\n");
      return NULL;
    }
    else if (Position == 1)
    {
      Node *ptr1 = createNode(value);
      list       = ptr1;
      return list;
    }
  }
  else if (Position == 1)
  {
    Node *ptr1 = createNode(value);
    ptr1->next = list;
    list       = ptr1;
    return list;
  }
  else
  {
    Node *ptr1 = pointNodeAtPos(list, Position - 1);
    if (ptr1 != NULL)
    {
      Node *ptr2       = ptr1->next;
      ptr1->next       = createNode(value);
      ptr1->next->next = ptr2;
      return list;
    }
  }
}

Node *insertNode(Node *list, int position, int value, insType type)
{
  if (type == INS_BEGINING)
  {
    return insertNodeBeginning(list, value);
  }
  else if (type == INS_ENDING)
  {
    return insertNodeEnding(list, value);
  }
  else if (type == INS_POSITION)
  {
    return insertNodePostion(list, position, value);
  }
}
