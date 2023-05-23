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

    if(n > 1) {
        for(int i = n - 1; i > 0; i--){
            list_p = add_list(list_p,i);
        }
    }

    printf("\n");

    for(int i = 1; i <= n; i++){
        list_p = del_list(list_p);
    }


    return 0;
}
