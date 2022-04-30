#include "rbt.h"
#include<iostream>
int delete_maximum(tree_t** root);
int delete_minimum(tree_t** root);
int delete_node(tree_t** root, data_t item);
int find_maximum(tree_t** root, data_t* max);
int find_minimum(tree_t** root, data_t* min);
int insert(tree_t** root, data_t item);