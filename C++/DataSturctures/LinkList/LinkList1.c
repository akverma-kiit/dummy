/******************************************************************************
LinkList1.c
 * :
This file contains the 'main' function. Program execution begins and ends
 * there.

*******************************************************************************/
#include "LlinkListUtility.h"

Node *createLinkList(Node *list, insType tpye, int userData, int *arr,
                     int size)
{
  if (userData)
  {
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
      int value;
      printf("Please Enter element in LinkList\n");
      scanf_s("%d", &value);

      if (list == NULL)
      {
        list = createNode(value);
      }
      else
      {
        list = insertNode(list, -1, value, tpye);
      }

      printf("Please press 'y' or 'Y' to continue\n");
      scanf_s(" %c", &ch, 1);
    }

    return list;
  }
  else
  {
    if (size <= 0)
    {
      printf("WARNINIG THE ARRAY IS EMPTY\tEXITING!!!\n");
      return list;
    }
    else
    {
      size--;
      while (size >= 0)
      {
        if (list == NULL)
        {
          list = createNode(arr[size]);
        }
        else
        {
          list = insertNode(list, -1, arr[size], !tpye);
        }
        size--;
      }
      return list;
    }
  }
}

int main()
{
  Node *start          = NULL;
  int arrValue[]       = { 11, 12, 13, 14, 15, 16 };
  unsigned int arrSize = sizeof(arrValue) / sizeof(arrValue[0]);

  start = createLinkList(start, INS_ENDING, 0, arrValue, arrSize);
  printLinkList(start);

  start = insertNode(start, 1, 99, INS_POSITION);
  printLinkList(start);

  //W8 Console
  char buf[15];
  gets(buf);
  return 0;
}
