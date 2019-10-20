#include "LinkListUtility.h"

Node *pointNodeAtPos(Node *list, int Position)
{
  if (Position < 1)
  {
    printf("WARNINIG INVALID LINK LIST POSITION \n");
    return NULL;
  }
  if (list == NULL)
  {
    printf("WARNINIG LINK LIST EMPTY\n");
    return NULL;
  }
  else
  {
    Node *ptr1  = list;
    int counter = 1;
    while (ptr1 != NULL && counter < Position)
    {
      ptr1 = ptr1->next;
      counter++;
    }
    if (ptr1 == NULL || counter != Position)
    {
      printf("WARNINIG LINK LIST POSITION \"%d\" NOT FOUND\n", Position);
      return NULL;
    }
    return ptr1;
  }
}

int valueOfNodeAtPos(Node *list, int Position)
{
  Node *ptr1 = pointNodeAtPos(list, Position);
  if (ptr1 == NULL)
  {
    printf("WARNINIG LINK LIST EMPTY OR POSITION \"%d\" NOT FOUND\n", Position);
    return 0;
  }
  else
  {
    return ptr1->data;
  }
}
