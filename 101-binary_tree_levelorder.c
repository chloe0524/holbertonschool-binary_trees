#include "binary_trees.h"

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

	return (hleft >= hright ? (hleft + 1) : (hright + 1));
}

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
