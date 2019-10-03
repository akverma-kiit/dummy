#include "LlinkListUtility.h"

Node *pointNodeAtPos(Node *list, int position)
{
  if (list == NULL || position < 1)
  {
    printf("WARNINIG LINK LIST EMPTY OR POSITION INVALID\n");
    return NULL;
  }
  else
  {
    Node *ptr1  = list;
    int counter = 1;
    while (ptr1 != NULL && counter < position)
    {
      ptr1 = ptr1->next;
      counter++;
    }
    if (ptr1 == NULL || counter != position)
    {
      printf("WARNINIG LINK LIST POSITION \"%d\" NOT FOUND\n", position);
      return NULL;
    }
    return ptr1;
  }
}

int valueOfNodeAtPos(Node *list, int position)
{
  Node *ptr1 = pointNodeAtPos(list, position);
  if (ptr1 == NULL)
  {
    printf("WARNINIG LINK LIST EMPTY OR POSITION \"%d\" NOT FOUND\n", position);
    return 0;
  }
  else
  {
    return ptr1->data;
  }
}
