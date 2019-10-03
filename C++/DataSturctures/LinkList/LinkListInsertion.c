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

Node *insertNode(Node *list, int value, insType type)
{
  if (type == INS_BEGINING)
  {
    return insertNodeBeginning(list, value);
  }
  else if (type == INS_ENDING)
  {
    return insertNodeEnding(list, value);
  }
}
