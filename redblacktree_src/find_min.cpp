/*******************************************************************************************************************************************************************
*Title			: Find Minimum
*Description		: This function finds the minimum data from the given Red Black tree.
*Prototype		: int find_minimum(tree_t **root, data_t *min);
*Input Parameters	: root – Pointer to the root node of the Red Black tree.
			: min – Minimum data present in the tree is collected via this pointer.
*Output			: Status (SUCCESS / FAILURE)
*******************************************************************************************************************************************************************/
#include "operations.h"

int find_minimum(tree_t** root, data_t* min)
{
	/* Definition goes here */
	if (*root == nullptr)
		return 1;
	tree_t* ptr = *root;
	while (ptr->left != nullptr) {
		ptr = ptr->left;
	}
	*min = ptr->data;
	return 0;
}
