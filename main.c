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

  printf("head->value = %d\n", head->value);       // what value for 5
  printf("head->next->value = %d\n", head->next->value); // what value for 8
  /*  Exercise I
      1. Add 1 more than at the end
      2. Add value(11)
      3. Make next become NULL
   */

    struct node d;
    b.next=&d;
    d.value = 11;
    d.next = NULL;
    printf("d.value = %d\n",d.value);
    printf("b.next->value = %d\n",b.next->value);
    printf("a.next->next->value = %d\n",a.next->next->value);
    printf("head->next->next->value = %d\n",head->next->next->value);

  /*  Exercise II
          1. Add 1 more than at the begining!!!!
          2. Add value (2)

  */
  typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate

  /*  Exercise III Use loop to print everything
      int i,n=5;
      for(i=0;i<n;i++){
          printf("%3d", tmp->value);
        // What is missing???
      }
  */

  /*  Exercise IV change to while loop!! (you can use NULL to help)

        while(){
           printf("%3d", tmp->value);
          // What is missing???
       }
   */

  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help

      */

  /*  Exercise VI Free all node !!
       //use a loop to help

   */

  return 0;
}