/**
 * @author Ytalo Ramon
 * @date   24/12/2021
 */

#include "../../includes/icomparator.h"

/**
 * Define the prototype of the struct.
 * struct _ItemList ItemList.
 */
typedef struct _ItemDLList ItemDLList;

/**
 * struct _ItemList.
 * attr: data - Payload.
 * attr: last - Pointer to the previous element in the chain.
 * attr: next - Pointer to the next element in the chain.
 */
struct _ItemDLList {
    struct _ItemDLList *previous, *next;
};

/**
 * Checks if the item is NULL.
 * @param item ItemList pointer.
 * @return Or 1 if NULL, or 0 if not NULL.
 */
int dll_item_is_null(ItemDLList *item);
