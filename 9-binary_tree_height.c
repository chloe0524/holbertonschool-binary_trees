#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of
 * a binary tree
 * @tree: pointer to tree
 * Return: height of tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		hleft = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		hright = binary_tree_height(tree->right) + 1;

	return (hleft >= hright ? hleft : hright);
}
