#include "hash_tables.h"

typedef struct {
    /* your data structure to store key-value pairs */
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
    /* allocate memory for hash table */
    hash_table_t *ht = malloc(sizeof(hash_table_t));
    if (ht == NULL) {
        return NULL;
    }
    
    /* initialize the hash table */
    /* allocate memory for the array */
    ht->array = malloc(size * sizeof(/* type of array element */));
    if (ht->array == NULL) {
        free(ht);
        return NULL;
    }
    /* initialize array elements */
    for (unsigned long int i = 0; i < size; i++) {
        /* initialize each element of the array */
    }
    /* set other fields of the hash table */
    ht->size = size;
    /* ... */
    
    return ht;
}


