#include "LlinkListUtility.h"

void printLinkList(Node *list)
{
  if (list == NULL)
  {
    printf("WARNINIG LINK LIST IS EMPTY\n");
  }
  else
  {
    Node *ptr1 = list;
    int pos    = 1;
    printf("******************************\nLinkList ->\t");
    while (ptr1 != NULL)
    {
      printf("%d\t", ptr1->data);
      ptr1 = ptr1->next;
    }
    printf("\n******************************\n");
    ptr1 = list;
    while (ptr1 != NULL)
    {
      printf("NODE=%#08X AT POS=%d\tNODE DATA=%d\tAND NODE NEXT DATA=%#08X\n", ptr1, pos, ptr1->data, ptr1->next);
      ptr1 = ptr1->next;
      pos++;
    }
    printf("\n******************************\n");
  }
}
