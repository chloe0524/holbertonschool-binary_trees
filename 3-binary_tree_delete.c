#include "binary_trees.h"

/**
 * binary_tree_delete - creates a binary tree node
 *
 * @tree: pointer to tree
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	if (tree->right == NULL)
		return (NULL);
	binary_tree_delete(tree->right);

	if (tree->left == NULL)
		return (NULL);
	binary_tree_delete(tree_left);

	free(tree);
}
