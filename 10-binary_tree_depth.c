#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of
 * a binary tree
 * @tree: pointer to tree
 * Return: depth of tree or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		tree_depth = binary_tree_depth(tree->parent) + 1;

	return (tree_depth);

}
