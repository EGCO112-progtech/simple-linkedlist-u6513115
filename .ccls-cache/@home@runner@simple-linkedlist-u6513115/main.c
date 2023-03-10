//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

/*  Exercise VI Free all node !!
     //use a loop to help

 */
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

  /*
  for (i = 0; i < n; i++) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;
    // What is missing???
  }
  printf("NULL\n");
  printf("-----------------------\n");*/

  while (tmp != NULL) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;

    // What is missing???
  }
  printf("NULL\n");
  printf("-----------------------\n");

  struct node *Nt;
  tmp = head;
  while (tmp != NULL) {
    printf("+\n"); //เช็คว่าทำงานได้จริง
    Nt = tmp->next;
    free(tmp);
    tmp = Nt;

    //ห้ามใช้ tmp = tmp->next; หลังจากฟรี
    // What is missing???
  }
  /*
  p->next=(NodePtr)malloc(sizeof(Node));
  p->next->value = head->value+3;

  p->next->next=(NodePtr)malloc(sizeof(Node));
  p->next->next->value = 11;
  p->next->next->next = NULL;
  */

  /*printf("%d\n", head->value);       // what value for 5
  printf("%d\n", head->next->value); // what value for 8
  printf("-----------------------\n");*/
  /*  Exercise I
      1. Add 1 more than at the end
      2. Add value(11)
      3. Make next become NULL
   */
  /*struct node d;
  b.next = &d;
  d.value = 11;
  d.next = NULL;
  printf("d.value = %d\n", d.value);
  printf("b.next->value = %d\n", b.next->value);
  printf("a.next->next->value = %d\n", a.next->next->value);
  printf("head->next->next->value = %d\n", head->next->next->value);
  printf("-----------------------\n");*/
  /*  Exercise II
          1. Add 1 more than at the begining!!!!
          2. Add value (2)
  */
  /*
  struct node z;
  z.value = 2;
  z.next = &a;
  head = &z;
  printf("%d -> ", head->value);
  printf("%d -> ", head->next->value);
  printf("%d -> ", head->next->next->value);
  printf("%d\n", head->next->next->next->value);
  printf("-----------------------\n");*/
  //
  /*typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate*/

  /*  Exercise III Use loop to print everything

  */
  /*
  int i, n = 4;
  for (i = 0; i < n; i++) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;
    // What is missing???
  }
  printf("NULL\n");
  printf("-----------------------\n");*/
  /*  Exercise IV change to while loop!! (you can use NULL to help)

   */
  /*
  tmp = head;
  while (tmp != NULL) {
    printf("%3d", tmp->value);
    tmp = tmp->next;

    // What is missing???
  }
  printf("NULL\n");
  printf("-----------------------\n");*/
  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help

      */
  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
           //use a loop to help

       */
  /*
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

  for (i = 0; i < n; i++) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;
    // What is missing???
  }
  printf("NULL\n");
  printf("-----------------------\n");

  while (tmp != NULL) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;

    // What is missing???
  }
  printf("NULL\n");
  printf("-----------------------\n");
  */
  return 0;
}
