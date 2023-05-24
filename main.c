#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {

    int info;
    size_t next_p;
    size_t prev_p;

} l_list ;


l_list * l_list_init(int item) {

    l_list *l_p;
    l_p = malloc(sizeof(struct linked_list));

        *l_p = (l_list){ .info = item,
        .next_p = NULL,.prev_p = NULL
    };

    printf("ptr=%d info=%d next=%d prev=%d \n",l_p,l_p->info,l_p->next_p,l_p->prev_p);

    return l_p;
}


l_list * add_list(l_list *l_p, int item) {

    struct linked_list *node_p;
    node_p = malloc(sizeof(struct linked_list));

    if (l_p != NULL) l_p->prev_p = node_p;

    node_p->info = item;
    node_p->next_p = l_p;
    node_p->prev_p = NULL;

    printf("ptr=%d info=%d next=%d prev=%d \n",node_p,node_p->info,node_p->next_p,node_p->prev_p);

    return node_p;
}


l_list * print_list(l_list *l_p) {

    size_t first_node = l_p;

    while(l_p != NULL) {

        printf("info = %d\n", l_p->info);
        l_p = l_p->next_p;

    }
    return first_node;
}

l_list * move_left(l_list *l_p, int n) {

    int first_item;
    int elem;
    size_t first_node = l_p;

    first_item = l_p->info;

    for(int i = 1; i < n; i++) {

        l_p = l_p->next_p;
        elem = l_p->info;
        l_p = l_p->prev_p;
        l_p->info = elem;
        l_p = l_p->next_p;

    }
    l_p->info = first_item;

    return first_node;

}


l_list * del_list(l_list *l_p) {

    size_t node_p = l_p->next_p;

    if(!l_p) free(l_p);

    printf("ptr=%d info=%d next=%d prev=%d \n",l_p,l_p->info,l_p->next_p,l_p->prev_p);

    return node_p;
}


int main()
{
    l_list *list_p;
    int n;


    printf("Enter the count of elements of list:");
    scanf("%d",&n);
    printf("\n");


    list_p = l_list_init(n);


    /*l_list *first_node = list_p;
    printf("firts node = %d \n", first_node);
    free(first_node);
    */



    if(n > 1) {
        for(int i = n - 1; i > 0; i--){
            list_p = add_list(list_p,i);
        }
    }

    printf("\n");

    list_p = print_list(list_p);
    list_p = move_left(list_p, 5);

    printf("\n");

    for(int i = 1; i <= n; i++){
        list_p = del_list(list_p);
    }


    return 0;
}
