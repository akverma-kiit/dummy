#include "LlinkListUtility.h"

void printLinkList(Node *list)
{
  Node *ptr1 = list;
  if (ptr1 == NULL)
  {
    printf("WARNINIG LINK LIST IS EMPTY\tEXITING!!!\n");
  }
  else
  {
    printf("******************************\nLinkList ->\t");
    while (ptr1 != NULL)
    {
      printf("%d\t", ptr1->data);
      ptr1 = ptr1->next;
    }
    printf("\n******************************\n");
  }
}
