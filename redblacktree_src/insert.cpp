/*******************************************************************************************************************************************************************
*Title			: Insertion
*Description		: This function performs inserting the new data into the given Red Black tree.
*Prototype		: int insert(tree_t **root, data_t item);
*Input Parameters	: root – Pointer to the root node of the Red Black tree.
			: item – New data to be inserted into the Red Black tree.
*Output			: Status (SUCCESS / FAILURE)
*******************************************************************************************************************************************************************/
#include "operations.h"

int insert(tree_t** root, data_t item)
{
	if (*root == nullptr) {
		*root = new node(item, 0);
		return SUCCESS;
	}
	tree_t* ptr = *root;
	tree_t* parent = nullptr;
	tree_t* grandparent = nullptr;
	bool left = item < ptr->data; // left or right
	bool parent_left = false;;
	bool grand_left = false;;
	// find node to append to
	while ((left && ptr->left != nullptr) || (!left && ptr->right != nullptr)) {
		grandparent = parent;
		parent = ptr;
		ptr = left ? ptr->left : ptr->right; // go left or right
		left = item < ptr->data; // which direction

	}
	// check color
	std::cout << (ptr == *(root)) << std::endl;
	std::cout << ptr->data << std::endl;
	if (ptr->color == 1 || ptr == (*root) ||
		(ptr->color == 0 && ((left && ptr->left == nullptr) || (!left && ptr->right == nullptr)))) {
		// black = no rotation
		ptr->color = 0;
		if (left)
			ptr->left = new node(item, 1);
		else
			ptr->right = new node(item, 1);
	}
	else {
		// red = rotation
		if (left) {
			// left rotation
			// only 2 nodes
			tree_t* temp = new node(item, 1);
			parent->left = nullptr;
			parent->right = nullptr;
			parent->color = 1;
			temp->left = parent;
			temp->right = ptr;
			if (grandparent == nullptr)
				*root = temp;
			else {
				if (grand_left)
					grandparent->left = temp;
				else {
					grandparent->right = temp;
				}
			}

		}
		else {
			// right rotation
			tree_t* temp = new node(item, 1);
			ptr->right = temp;
			parent->left = nullptr;
			parent->right = nullptr;
			parent->color = 1;
			ptr->left = parent;
			ptr->color = 0;
			if (grandparent == nullptr)
				*root = ptr;
			else {
				if (grand_left)
					grandparent->left = ptr;
				else {
					grandparent->right = ptr;
				}
			}


		}
	}


	/* Definition goes here */
	return SUCCESS;
}
