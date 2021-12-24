/**
 * @author Ytalo Ramon
 * @date   24/12/2021
 */

#include "doubly_linked_list_base.h"

/**
 * Remove the element after a base item.
 * @param item_base Reference item.
 * @param new_item Item for insertion.
 */
void cdll_insert_after_item(ItemDLList *item_base, ItemDLList *new_item);

/**
 * Remove the element after a base item.
 * @param item_base Reference item.
 */
void cdll_remove_after_item(ItemDLList *item_base);

/**
 * Returns the number of items with the specified value.
 * @param item_start Pointer to start element.
 * @param elmnt Element sought.
 * @param comparator Comparison function.
 *      Input in comparator(elmnt, itemList_current).
 * @return Number of elements that satisfy the conditions.
 */
size_t cdll_count(ItemDLList *item_start, void *elmnt, ICOMPARATOR);

/**
 * Returns the first ItemList with the specified value.
 * @param item_start Pointer to start element.
 * @param elmnt Element sought.
 * @param comparator Comparison function.
 *      Input in comparator(elmnt, itemList_current).
 * @return The object if found, or NULL if not.
 */
ItemDLList *cdll_find(ItemDLList *item_start, void *elmnt, ICOMPARATOR);

/**
 * Returns the offset bettween the item_start
 *  and the element with the specified value.
 * @param item_start Pointer to start element.
 * @param elmnt Element sought.
 * @param comparator Comparison function.
 *      Input in comparator(elmnt, itemList_current).
 * @return Offset object if found, or -1 if not.
 */
int cdll_offset(ItemDLList *item_start, void *elmnt, ICOMPARATOR);
