#include "lib.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
store_s* load_distances(void) { // read from file
    FILE* distances;
    distances = fopen("C:\\Users\\armin\\CLionProjects\\P1_nice\\src\\files\\distances.txt", "r");
    if (NULL == distances){
        printf("error");
    }
    store_s store[5] ;
    for (int i = 0; i < 5 ; ++i) {
        fscanf(distances, "%[^,], %d\n", store[i].name, &store[i].distance);
    }
    fclose(distances);
return store;
}

void load_normal_prices(void) { // read from file

}
void load_discounts(void) { // read from file

}
void load_shopping_list(void) { // read from file

}

/**
 * add_item is used for declaring which items exist in the store
 * @param store the store to add
 * @param name name of the item
 * @param price price of said item
 */
void add_item(store_s* store, char* name, double price) {
    // we start by allocating space for a new node. The node already contains enough space for the item.
    node_t* new_node = (node_t*) malloc(sizeof(node_t));
    new_node->next = store->first_item; // we push the next element down
    new_node->item.price = price;
    // we use strcpy here because C does not support direct assignment.
    strcpy(new_node->item.name, name);
    // fix the list.
    store->first_item = new_node;
}

void update_item(void) { // discounts

}
