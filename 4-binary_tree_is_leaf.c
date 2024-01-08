#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: pointer to node
 * Return: leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return;
	if (node->left == NULL && node->right == NULL)
		return(2);
	return (0);	
}
