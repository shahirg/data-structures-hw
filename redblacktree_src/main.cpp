/**************************************************************************************************************************************************************
*Title		: main function(Driver function)
*Description	: This function is used as the driver function for the all the functions
***************************************************************************************************************************************************************/
#include "operations.h"
#include <iostream>
#include <stdio.h>
using namespace std;


void print_tree_rec(tree_t* root, int depth) {
	if (root == nullptr)
		return;
	for (int i = 0; i < depth; i++)
		cout << "~";
	cout << "(" << root->data << ")--(" << (root->color == 0 ? "BLACK->" : "RED->") << root->color << ")  ";

	int temp = depth + 1;
	print_tree_rec(root->left, temp);
	print_tree_rec(root->right, temp);

}
void print_tree(tree_t* root) {
	print_tree_rec(root, 0);
}
int main()
{
	/* Declare the pointers */
	tree_t* root = nullptr;
	data_t data;
	data_t minimum;
	data_t maximum;
	int operation;
	char option = 'y';
	do
	{
		/* Display the menu */
		printf("\n1. Insert\n2. Delete\n3. Find Minimum\n4. Delete Minimum\n5. Find Maximum\n6. Delete Maximum\n");
		scanf("\n%i", &operation);
		/* Read the option for performing the operation */

		/* Jump to the option entered by the user */
		switch (operation)
		{
		case 1:
			printf("Enter the data to be inserted into the RB Tree: ");
			scanf("%d", &data);
			insert(&root, data);
			/* Modify the above line to handle the error */
			print_tree(root);
			break;
		case 2:
			printf("Enter the data to be deleted from the RB Tree: ");
			scanf("%d", &data);
			delete_node(&root, data);
			/* Modify the above line to handle the error */
			print_tree(root);
			break;
		case 3:
			find_minimum(&root, &minimum);
			/* Modify the above line to handle the error */
			printf("Minimum data: %d\n", minimum);
			print_tree(root);
			break;
		case 4:
			delete_minimum(&root);
			/* Modify the above line to handle the error */
			print_tree(root);
			break;
		case 5:
			find_maximum(&root, &maximum);
			/* Modify the above line to handle the error */
			printf("Maximum data: %d\n", maximum);
			print_tree(root);
			break;
		case 6:
			delete_maximum(&root);
			/* Modify the above line to handle the error */
			print_tree(root);
			break;
		}
		printf("Want to continue? Press [yY | nN]: ");
		//scanf("\n%c", &option);
	} while (option == 'y' || option == 'Y');

	return 0;
}
