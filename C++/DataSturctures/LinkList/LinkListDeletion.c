#include "LlinkListUtility.h"

void removeNode(Node *Pointer)
{
  if (Pointer == NULL)
  {
    printf("[DELETING] WARNINIG POINTING TO NULL NODE\n");
  }
  else
  {
    //printf("NODE=%#08X\tNODE DATA%d\tNODE NEXT	%#08X\n", Pointer, Pointer->data, Pointer->next);
    printNode("[DELETING]", Pointer, -1);
    free(Pointer);
  }
}

Node *deleteNodeBeginning(Node *list)
{
  if (list == NULL)
  {
    printf("[DELETING] WARNINIG LINK LIST IS EMPTY\n");
    return list;
  }
  else
  {
    Node *ptr1 = list;
    list       = list->next;
    printNode("[DELETING]", ptr1, 1);
    free(ptr1);
    return list;
  }
}

Node *deleteNodeEnding(Node *list)
{
  if (list == NULL)
  {
    printf("[DELETING] WARNINIG LINK LIST IS EMPTY\n");
    return list;
  }
  else if (list->next == NULL)
  {
    Node *ptr1 = list;
    list       = NULL;
    printNode("[DELETING]", ptr1, 1);
    free(ptr1);
    return list;
  }
  else
  {
    Node *ptr1 = list, *ptr2 = NULL;
    while (ptr1->next != NULL)
    {
      ptr2 = ptr1;
      ptr1 = ptr1->next;
    }
    ptr2->next = NULL;
    printNode("[DELETING]", ptr1, -1);
    free(ptr1);
    return list;
  }
}

Node *deleteNodePostion(Node *list, int Position)
{
  if (list == NULL)
  {
    printf("[DELETING] WARNINIG LINK LIST IS EMPTY\n");
    return list;
  }
  if (Position < 1)
  {
    printf("[DELETING] WARNINIG INVALID LINK LIST POSITION \n");
    return list;
  }
  else if (Position == 1)
  {
    return deleteNodeBeginning(list);
  }
  else
  {
    Node *ptr1 = pointNodeAtPos(list, Position - 1);
    if (ptr1 != NULL)
    {
      Node *ptr2 = ptr1->next;
      if (ptr2 == NULL)
      {
        printf("[DELETING] WARNINIG LINK LIST POSITION \"%d\" NOT FOUND\n", Position);
        return list;
      }
      else
      {
        ptr1->next = ptr2->next;
        printNode("[DELETING]", ptr1, Position);
        free(ptr2);
        return list;
      }
    }
    return list;
  }
}

Node *deleteNodeOfValue(Node *list, int value)
{
  /*
  if (list == NULL)
  {
    if (value != 1)
    {
      printf("WARNINIG LINK LIST IS EMPTY\n");
      return NULL;
    }
    else if (value == 1)
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
  }*/
}

Node *deleteNode(Node *list, int Position, int value, delType type)
{
  if (type == DEL_BEGINING)
  {
    return deleteNodeBeginning(list);
  }
  else if (type == DEL_ENDING)
  {
    return deleteNodeEnding(list);
  }
  else if (type == DEL_POSITION)
  {
    return deleteNodePostion(list, Position);
  }
  else if (type == DEL_VALUE)
  {
    return deleteNodeOfValue(list, value);
  }
}
