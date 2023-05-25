#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {

    int info;
    size_t next_p;
    size_t prev_p;

} l_list ;



l_list * l_list_init(int item);
l_list * add_node(l_list *l_p, int item);
l_list* add_list(l_list * l_p, int n);
l_list * print_list(l_list *l_p);
l_list * move_left(l_list *l_p, int n, int k);
l_list * del_node(l_list *l_p);
l_list * del_list(l_list *l_p, int n);



int main()
{
    l_list *list_p;
    int n,k;

    printf("Enter the count of elements of list(variable n): ");
    scanf("%d",&n);
    printf("Enter the count of displacements(variable k, less than n): ");
    scanf("%d",&k);
    printf("\n");

    if(n > 0 && k <= n) {

        list_p = l_list_init(n);
        list_p = add_list(list_p,n);

        printf("List before diplacement:\n");

        list_p = print_list(list_p);
        list_p = move_left(list_p, n,k);

        printf("\n");

        printf("List after diplacement:\n");
        list_p = print_list(list_p);

        list_p = del_list(list_p,n);

    }
    else printf("k shouldn't be more than n and n should be more than 0");


    return 0;
}




l_list * del_node(l_list *l_p) {

    size_t node_p = l_p->next_p;

    if(!l_p) free(l_p);

    //printf("ptr=%d info=%d next=%d prev=%d \n",l_p,l_p->info,l_p->next_p,l_p->prev_p);

    return node_p;
}



l_list * del_list(l_list *l_p, int n) {

    for(int i = 1; i <= n; i++){
        l_p = del_node(l_p);
    }

    return l_p;
}



l_list * move_left(l_list *l_p, int n, int k) {

    int first_item;
    int elem;
    size_t first_node = l_p;

    for(int i = 1; i <= k; i++){

        first_item = l_p->info;

        for(int j = 1; j < n; j++) {

            l_p = l_p->next_p;
            elem = l_p->info;
            l_p = l_p->prev_p;
            l_p->info = elem;
            l_p = l_p->next_p;

        }

        l_p->info = first_item;
        l_p = first_node;
    }

    return first_node;

}

l_list * print_list(l_list *l_p) {

    size_t first_node = l_p;

    while(l_p) {

        printf("info = %d ", l_p->info);
        l_p = l_p->next_p;


    }

    printf("\n");
    return first_node;
}

l_list * l_list_init(int item) {

    l_list *l_p;
    l_p = malloc(sizeof(struct linked_list));

    l_p->info = item;
    l_p->next_p = NULL;
    l_p->prev_p = NULL;

    //printf("ptr=%d info=%d next=%d prev=%d \n",l_p,l_p->info,l_p->next_p,l_p->prev_p);

    return l_p;
}



l_list * add_node(l_list *l_p, int item) {

    struct linked_list *node_p;
    node_p = malloc(sizeof(struct linked_list));

    if (l_p) l_p->prev_p = node_p;

    node_p->info = item;
    node_p->next_p = l_p;
    node_p->prev_p = NULL;

    //printf("ptr=%d info=%d next=%d prev=%d \n",node_p,node_p->info,node_p->next_p,node_p->prev_p);

    return node_p;
}

l_list* add_list(l_list * l_p, int n) {

    for(int i = n - 1; i > 0; i--){

            l_p = add_node(l_p, i);
        }

    return l_p;
}
