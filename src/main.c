#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

#define N_STORES 5

int main(void) {
    char* filename = "src/files/distances.txt";
    store_s* stores = load_distances();
    int n_stores = get_new_lines(filename);
//    // debug
//    for (int i = 0; i < n_stores; ++i) {
//        printf("%s %d\n", stores[i].name, stores[i].distance);
//    }

    load_normal_prices(stores, n_stores);

    // load discounts
    load_discounts(stores);
//    // debug
//    for (int i = 0; i < 5; i++) {
//        node_t* current_item = stores[i].first_item;
//        while (current_item != NULL){
//            printf("%s: %s %lf\n", stores[i].name, current_item->item.name, current_item->item.price);
//            current_item = current_item->next;
//        }
//    }


    // free up all items in each store
    for (int i = 0; i < 5; i++) {
        deallocate_list(&stores[i]);
    }
    // free up the store array
    free(stores);

    return 0;
}
