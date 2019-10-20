#include "LinkListUtility.h"

void printNode(char *message, Node *Pointer, int nodePos)
{
  if (message == NULL)
  {
    message = "NODE DETAIL";
  }
  if (Pointer == NULL)
  {
    printf("PRINTING WARNINIG POINTING TO NULL NODE\n");
  }
  else if (nodePos > 0)
  {
    printf("%s\tPOS=%d\tNODE_ADD=%#08X\tNODE_DATA=%d\tNODE_NEXT=%#08X\n", message, nodePos, Pointer, Pointer->data, Pointer->next);
  }
  else
  {
    printf("%s\tPOS=XX\tNODE_ADD=%#08X\tNODE_DATA=%d\tNODE_NEXT=%#08X\n", message, Pointer, Pointer->data, Pointer->next);
  }
}

void printLinkList(Node *list, int nodePrint)
{
  if (list == NULL)
  {
    printf("\n*****************\nLinkList ->\t");
    printf("[WARNINIG LINK LIST IS EMPTY]\t");
    printf("\n*****************\n\n");
  }
  else
  {
    Node *ptr1 = list;
    printf("\n*****************\nLinkList ->\t");
    while (ptr1 != NULL)
    {
      printf("[%d]\t", ptr1->data);
      ptr1 = ptr1->next;
    }
    printf("[NULL]\n*****************\n\n");
    if (nodePrint > 0)
    {
      int pos = 1;
      ptr1    = list;
      while (ptr1 != NULL)
      {
        printNode("[NODE]", ptr1, pos);
        ptr1 = ptr1->next;
        pos++;
      }
      printf("**********************************************************************\n\n");
    }
  }
}
