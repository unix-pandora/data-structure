#include "../../header/distribution/func.h"

typedef struct SINGELINKLIST {
    int data;
    struct SINGELINKLIST *next;
} sllNode;

sllNode *head_insert_method(int arr[], int arr_size) {
    sllNode *node, *tmp;
    int length = 0;

    node = (sllNode *) malloc(sizeof(sllNode));
    node->next = NULL;

    while ((arr_size--) != 0) {
        tmp = (sllNode *) malloc(sizeof(sllNode));

        tmp->data = *(arr + length);
        tmp->next = node->next;
        node->next = tmp;

        length++;
    }

    return node;
}

void ergodic_sllNode(sllNode *node) {
    sllNode *temp = node->next;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}


void export_sllNode() {
    int arr[] = {15, 62, 34};
    int size = 3;

    sllNode *sllNode = head_insert_method(arr, size);

    ergodic_sllNode(sllNode);
}