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
	// P = parent
	// U = unclde
	// G = grandparent
	// N = new node
	tree_t* N = new node(item, RED);
	tree_t* P = *root;
	tree_t* G = nullptr;
	tree_t* U = nullptr;
	tree_t* GGP = nullptr;
	bool left = item < P->data; // left or right
	bool parent_left = false;;
	bool grand_left = false;;
	// find node to append to
	while ((left && P->left != nullptr) || (!left && P->right != nullptr)) {
		GGP = G;
		U = left ? P->right : P->left;
		G = P;
		P = left ? P->left : P->right; // go left or right
		grand_left = parent_left;
		parent_left = left;
		left = item < P->data; // which direction

	}
	// check color
	std::cout << (P == *(root)) << std::endl;
	std::cout << P->data << std::endl;
	if (U != nullptr)
		std::cout << U->data << std::endl;
	if (G != nullptr)
		std::cout << G->data << std::endl;
	// add to root
	if (P == (*root)) {
		if (left)
			P->left = N;
		else
			P->right = N;
		std::cout << N->color << std::endl;
		return SUCCESS;
	}
	// parent and uncle red
	else if (U != nullptr && U->color == RED) {
		P->color = BLACK;
		U->color = BLACK;
		G->color = RED;
		if (left)
			P->left = N;
		else
			P->right = N;
	}
	else if (U == nullptr || U->color == BLACK) {
		//LL rotation
		if (G->left == P && left) {
			P->left = N;
			P->right = G;
			G->left = nullptr;
			P->color = BLACK;
			G->color = RED;
			if (GGP == nullptr)
				*root = P;
			else {
				if (grand_left)
					GGP->left = P;
				else {
					GGP->right = P;
				}
			}

		}
		//LR rotation
		else if (G->left == P && !left) {
			N->left = P;
			N->right = G;
			G->left = nullptr;
			G->color = RED;
			N->color = BLACK;
			if (GGP == nullptr)
				*root = N;
			else {
				if (grand_left)
					GGP->left = N;
				else {
					GGP->right = N;
				}
			}
		}

		//RR rotation
		else if (G->right == P && !left) {
			P->right = N;
			P->left = G;
			G->right = nullptr;
			P->color = BLACK;
			G->color = RED;
			if (GGP == nullptr)
				*root = P;
			else {
				if (grand_left)
					GGP->left = P;
				else {
					GGP->right = P;
				}
			}
		}
		//RL rotation
		else if (G->right == P && left) {
			N->left = G;
			N->right = P;
			G->right = nullptr;
			G->color = RED;
			N->color = BLACK;
			if (GGP == nullptr)
				*root = N;
			else {
				if (grand_left)
					GGP->left = N;
				else {
					GGP->right = N;
				}
			}
		}

	}

	// if (ptr->color == 1 || ptr == (*root) ||
	// 	(ptr->color == 0 && ((left && ptr->left == nullptr) || (!left && ptr->right == nullptr)))) {
	// 	// black = no rotation
	// 	ptr->color = 0;
	// 	if (left)
	// 		ptr->left = new node(item, 1);
	// 	else
	// 		ptr->right = new node(item, 1);
	// }
	// else {
	// 	// red = rotation
	// 	if (left) {
	// 		// left rotation
	// 		// only 2 nodes
	// 		tree_t* temp = new node(item, 1);
	// 		parent->left = nullptr;
	// 		parent->right = nullptr;
	// 		parent->color = 1;
	// 		temp->left = parent;
	// 		temp->right = ptr;
	// 		if (grandparent == nullptr)
	// 			*root = temp;
	// 		else {
	// 			if (grand_left)
	// 				grandparent->left = temp;
	// 			else {
	// 				grandparent->right = temp;
	// 			}
	// 		}

	// 	}
	// 	else {
	// 		// right rotation
	// 		tree_t* temp = new node(item, 1);
	// 		ptr->right = temp;
	// 		parent->left = nullptr;
	// 		parent->right = nullptr;
	// 		parent->color = 1;
	// 		ptr->left = parent;
	// 		ptr->color = 0;
	// 		if (grandparent == nullptr)
	// 			*root = ptr;
	// 		else {
	// 			if (grand_left)
	// 				grandparent->left = ptr;
	// 			else {
	// 				grandparent->right = ptr;
	// 			}
	// 		}


	// 	}
	// }


	/* Definition goes here */
	return SUCCESS;
}
