#include "binary_trees.h"

/**
 * binary_tree_height- measure height factor of binary tree
 * @tree: binary tree
 *
 * Return: return height or null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	printf("n=%d, left %d, right %d\n", tree->n, left_height, right_height);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}

/**
 * binary_tree_balance- measure balance factor of binary tree
 * @tree: binary tree
 *
 * Return: balance factor or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);

}
