/******************************************************************************
LinkList.cpp
 * :
This file contains the 'main' function. Program execution begins and ends
 * there.

*******************************************************************************/
//#include <iostream>
#include <malloc.h>
#include <stdio.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

typedef enum insertType {
  ENDING = 0,
  BEGINING = 1,
  RANDOM,
} inType;

Node *createNode(int value) {
  Node *tempNode = (Node *)malloc(sizeof(Node));
  tempNode->data = value;
  tempNode->next = NULL;
  return tempNode;
}

Node *insertNodeBeginning(Node *list, int value) {
  if (list == NULL) {
    Node *ptr1 = createNode(value);
    list = ptr1;
    return list;
  } else {
    Node *ptr1 = createNode(value);
    ptr1->next = list;
    list = ptr1;
    return list;
  }
}

Node *insertNodeEnding(Node *list, int value) {
  if (list == NULL) {
    Node *ptr1 = createNode(value);
    list = ptr1;
    return list;
  } else {
    Node *ptr1 = list;
    while (ptr1->next != NULL) {
      ptr1 = ptr1->next;
    }
    ptr1->next = createNode(value);
    return list;
  }
}

Node *insertNode(Node *list, int value, inType type) {
  if (type == BEGINING) {
    return insertNodeBeginning(list, value);
  } else if (type == ENDING) {
    return insertNodeEnding(list, value);
  }
}

Node *createLinkList(Node *list, inType tpye, int userData, int *arr,
                     int size) {
  if (userData) {
    char ch = 'y';
    while (ch == 'y' || ch == 'Y') {
      int value;
      printf("Please Enter element in LinkList\n");
      scanf_s("%d", &value);

      if (list == NULL) {
        list = createNode(value);
      } else {
        list = insertNode(list, value, tpye);
      }

      printf("Please press 'y' or 'Y' to continue\n");
      scanf_s(" %c", &ch, 1);
    }

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // unsigned int n = sizeof(arr) / sizeof(arr[0]);

    return list;
  } else {
    if (size <= 0) {
      printf("WARNINIG THE ARRAY IS EMPTY\tEXITING!!!\n");
      return list;
    } else {
      size--;
      while (size >= 0) {
        if (list == NULL) {
          list = createNode(arr[size]);
        } else {
          list = insertNode(list, arr[size], !tpye);
        }
        size--;
      }
      return list;
    }
  }
}

void printLinkList(Node *list) {
  Node *ptr1 = list;
  if (ptr1 != NULL) {
    printf("******************************\nLinkList ->\t");
    while (ptr1 != NULL) {
      printf("%d\t", ptr1->data);
      ptr1 = ptr1->next;
    }
    printf("\n******************************\n");
  } else {
    printf("WARNINIG LINK LIST IS EMPTY\tEXITING!!!\n");
  }
}

int main() {
  Node *start = NULL;
  int arrValue[6] = {11, 12, 13, 14, 15, 16};
  unsigned int arrSize = sizeof(arrValue) / sizeof(arrValue[0]);

  // start = createLinkList(start, ENDING, 1,arrValue);
  // start = createLinkList(start, BEGINING, 1,arrValue);
  
  //start = createLinkList(start, ENDING, 0, arrValue, arrSize);
  start = createLinkList(start, BEGINING, 0, arrValue, arrSize);
  
  printLinkList(start);
}
