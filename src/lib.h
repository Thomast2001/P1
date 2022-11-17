#define MAX_NAME_SIZE 50

typedef struct {
    char name[MAX_NAME_SIZE];
    double price;
} item_s;

typedef struct node_t {
    item_s item;
    struct node_t* next;
} node_t;

typedef struct {
    char name[MAX_NAME_SIZE];
    int distance;
    node_t* first_item;
} store_s;

typedef struct {
    store_s store;
    item_s item;
} cart_item;

typedef struct{
    char item[MAX_NAME_SIZE];
}shoppinglist;

void load_normal_prices(store_s stores[], int store_count); // read from file
store_s* load_distances(void); // read from file
void load_discounts(store_s stores[]); // read from file
shoppinglist* load_shopping_list(void); // read from file
void add_item(store_s* store, char* name, double price); // load normal prices
int get_new_lines(char* filename);