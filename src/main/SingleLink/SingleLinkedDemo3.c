#include "../../header/distribution/func.h"

typedef struct LINKNODE {
    int elem;
    struct LINKNODE *next;
} link;

link *initialization_link_list_fun() {
    int n = 10;
    link *p = (link *) malloc(sizeof(link));
    link *temp = p;

    for (int i = 0; i < 5; ++i) {
        link *a = (link *) malloc(sizeof(link));

        a->elem = n;
        a->next = temp->next;

        //establish the logical relationship between the new node and the previous node
        temp->next = a;

        n += 3;
    }

    return p;
}

link *insert_elem_function(link *pointer, int value, int targetPosition) {
    link *tmp = pointer;

    //find the previous node of the target location
    for (int i = 0; i < targetPosition; ++i) {
        tmp = tmp->next;
        if (tmp == NULL) {
            printf("invaild position\n");
            return pointer;
        }
    }

    link *node2 = (link *) malloc(sizeof(link));
    node2->elem = value;

    node2->next = tmp->next;
    tmp->next = node2;

    return pointer;
}

void display_linkedlist(link *lk) {
    link *pt = lk->next;

    while (pt != NULL) {
        printf("%d  ", pt->elem);
        pt = pt->next;
    }
}

void export_the_linkedlist() {
    link *list = initialization_link_list_fun();
    display_linkedlist(list);
    printf("\n--------------------------------------\n");

    list = insert_elem_function(list, 36, 3);
    display_linkedlist(list);
}

/*
p = {link * | 0x5570cfde12a0} 0x5570cfde12a0
 elem = {int} 0
 NEXT = {struct LINKNODE * | 0x5570cfde1340} 0x5570cfde1340
  elem = {int} 22
  NEXT = {struct LINKNODE * | 0x5570cfde1320} 0x5570cfde1320
   elem = {int} 19
   NEXT = {struct LINKNODE * | 0x5570cfde1300} 0x5570cfde1300
    elem = {int} 16
    NEXT = {struct LINKNODE * | 0x5570cfde12e0} 0x5570cfde12e0
     elem = {int} 13
     NEXT = {struct LINKNODE * | 0x5570cfde12c0} 0x5570cfde12c0
      elem = {int} 10
      NEXT = {struct LINKNODE * | 0x0} NULL
 * */