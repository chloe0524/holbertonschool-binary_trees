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
		return;

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	if (tree->left != NULL)

		binary_tree_delete(tree->left);

	free(tree);
}
