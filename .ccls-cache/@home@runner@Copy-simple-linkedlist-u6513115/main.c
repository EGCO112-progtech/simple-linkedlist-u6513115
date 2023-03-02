//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

/*  Exercise V Use malloc to create all nodes, instead of create a struct!!
        //use a loop to help

    */

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  int c = 5;
  struct node b, *head;
  typedef struct node Node;
  typedef Node *NodePtr;

  NodePtr p = (NodePtr)malloc(sizeof(Node));
  head = p;
  p->value = c;

  int i, n = 4;
  for (i = 0; i < n; i++) {
    p->next = (NodePtr)malloc(sizeof(Node));
    p = p->next;
    p->value = c + i + 1;
    p->next = NULL; //จะได้ชัวร์ว่ามี next
  }

  typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate

  while (tmp != NULL) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;

    // What is missing???
  }

  return 0;
}