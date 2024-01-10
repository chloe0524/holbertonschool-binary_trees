#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal
 *
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 *
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_levelorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_levelorder(tree->right, func);
}
