#include <malloc.h>
#include "linked_list.h"

int push_front_linked_list(linked_list **lst, int value) {
    linked_list *node;

    node = (linked_list *) malloc(sizeof(linked_list));
    if (node == NULL) {
        return 1;
    }
    node->value = value;
    node->next = NULL;

    if (*lst == NULL) {
        *lst = node;
    } else {
        node->next = *lst;
        *lst = node;
    }
    return 0;
}

int push_back_linked_list(linked_list **lst, int value) {
    linked_list *node;
    linked_list *end;

    node = (linked_list *) malloc(sizeof(linked_list));
    if (node == NULL) {
        return 1;
    }
    node->value = value;
    node->next = NULL;

    if (*lst == NULL) {
        *lst = node;
        return 0;
    }
    end = *lst;
    while (end->next != NULL)
        end = end->next;
    end->next = node;
    return 0;
}

void free_linked_list(linked_list *lst) {
    linked_list *cur;

    while (lst != NULL) {
        cur = lst;
        lst = lst->next;
        free(cur);
    }
}

void print_linked_list(linked_list *lst) {
    if (lst == NULL) {
        printf("empty\n");
        return;
    }
    printf("%d", lst->value);
    lst = lst->next;
    while (lst != NULL) {
        printf(" -> %d", lst->value);
        lst = lst->next;
    }
    putchar('\n');
}