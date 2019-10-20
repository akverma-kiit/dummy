#include "LinkListUtility.h"

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
    printNode("[INSERTING]", ptr1, 1);
    list = ptr1;
    return list;
  }
  else
  {
    Node *ptr1 = createNode(value);
    ptr1->next = list;
    printNode("[INSERTING]", ptr1, 1);
    list = ptr1;
    return list;
  }
}

Node *insertNodeEnding(Node *list, int value)
{
  if (list == NULL)
  {
    Node *ptr1 = createNode(value);
    printNode("[INSERTING]", ptr1, 1);
    list = ptr1;
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
    printNode("[INSERTING]", ptr1->next, -1);
    return list;
  }
}

Node *insertNodePostion(Node *list, int Position, int value)
{
  if (list == NULL)
  {
    if (Position != 1)
    {
      printf("[INSERTING] WARNINIG LINK LIST IS EMPTY\n");
      return list;
    }
    else if (Position == 1)
    {
      Node *ptr1 = createNode(value);
      printNode("[INSERTING]", ptr1, 1);
      list = ptr1;
      return list;
    }
  }
  else if (Position == 1)
  {
    Node *ptr1 = createNode(value);
    printNode("[INSERTING]", ptr1, 1);
    ptr1->next = list;
    list       = ptr1;
    return list;
  }
  else
  {
    Node *ptr1 = pointNodeAtPos(list, Position - 1);
    if (ptr1 != NULL)
    {
      Node *ptr2 = ptr1->next;
      ptr1->next = createNode(value);
      printNode("[INSERTING]", ptr1->next, Position);
      ptr1->next->next = ptr2;
      return list;
    }
    return list;
  }
}

Node *insertNode(Node *list, int Position, int value, insType type)
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
    return insertNodePostion(list, Position, value);
  }
}
