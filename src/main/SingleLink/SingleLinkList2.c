#include "../../header/distribution/func.h"

typedef struct SINGELINKLIST2 {
    int data;
    struct SINGELINKLIST2 *next;
} sllNode2;

void head_insert_method2(sllNode2 *node, int *arr, int arr_size) {
    sllNode2 *tmp, *head;
    int length = 0;
    head = node;

    while ((arr_size--) != 0) {
        tmp = (sllNode2 *) malloc(sizeof(sllNode2));
        tmp->data = *(arr + length);

        tmp->next = head->next;
        head->next = tmp;

        length++;
    }
}

void ergodic_single_list(sllNode2 *node) {
    sllNode2 *temp = node;

    while (temp != NULL) {
        printf("%d\n", temp->next->data);
        temp = temp->next;
    }
}

void initialize_sll_node2(sllNode2 *sl) {
    sl = (sllNode2 *) malloc(sizeof(sllNode2));
    sl->next = NULL;
}


void export_sllNode2() {
    int arr[] = {15, 62, 34};
    int size = 3;

    sllNode2 *sll2;
    initialize_sll_node2(sll2);

    head_insert_method2(sll2, arr, size);
    ergodic_single_list(sll2);
}