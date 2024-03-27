#include <stdio.h>
#include "linked_list.h"


int main () {
    linked_list *my_list = NULL;
    print_linked_list(my_list);
    push_front_linked_list(&my_list, 2);
    print_linked_list(my_list);
    push_front_linked_list(&my_list, 3);
    push_front_linked_list(&my_list, 4);
    push_front_linked_list(&my_list, 5);
    print_linked_list(my_list);
    free_linked_list(my_list);

    my_list = NULL;
    push_back_linked_list(&my_list, 1);
    push_back_linked_list(&my_list, 2);
    print_linked_list(my_list);
    free_linked_list(my_list);

    

    return 0;
}
