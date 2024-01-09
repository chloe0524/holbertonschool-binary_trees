#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree full
 * @tree: pointer to tree
 * Return: if tree full 1 if not 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left) == NULL && (tree->right) == NULL)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

}
