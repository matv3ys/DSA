typedef struct linked_list {
    int value;
    struct linked_list *next;
} linked_list;


int push_front_linked_list(linked_list **lst, int value);
int push_back_linked_list(linked_list **lst, int value);

void inverse_linked_list(linked_list **lst);

void free_linked_list(linked_list *lst);

void print_linked_list(linked_list *lst);