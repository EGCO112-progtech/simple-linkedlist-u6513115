//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  int c = 5;
  struct node a, b, *head;
  a.value = c;
  a.next = &b;
  head = &a;
  b.value = head->value + 3;


  /*  Exercise I
      1. Add 1 more than at the end
      2. Add value(11)
      3. Make next become NULL
   */

    struct node d;
    b.next=&d;
    d.value = 11;
    d.next = NULL;

  /*  Exercise II
          1. Add 1 more than at the begining!!!!
          2. Add value (2)

  */
  
    struct node z;
  z.value = 2;
  z.next = &a;
  head = &z;

  
  typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate


  /*  Exercise IV change to while loop!! (you can use NULL to help)

        while(){
           printf("%3d", tmp->value);
          // What is missing???
       }
   */
  printf("Exercise IV\n");
    tmp = head;
  while (tmp != NULL) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;

    // What is missing???
  }
  printf("NULL\n");
  printf("-----------------------\n");

  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help

      */

  /*  Exercise VI Free all node !!
       //use a loop to help

   */

  return 0;
}