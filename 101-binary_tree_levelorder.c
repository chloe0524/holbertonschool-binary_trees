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
		hleft = binary_tree_height(tree->left);
	if (tree->right != NULL)
		hright = binary_tree_height(tree->right);

	return (hleft >= hright ? (hleft + 1) : (hright + 1));
}

/**
 * node_level - get node level
 *
 * @tree: pointer to tree root
 * @lvl: level of the node
 * @func: pointer to a function
 */
void node_level(const binary_tree_t *tree, size_t lvl, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (lvl == 1)
		func(tree->n);
	else if (lvl > 1)
	{
		node_level(tree->left, lvl - 1, func);
		node_level(tree->right, lvl - 1, func);
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal
 *
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = binary_tree_height(tree);

	if (tree == NULL || func == NULL)
		return;

	for (size_t lvl = 1; lvl <= height + 1; lvl++)
		node_level(tree, lvl, func);
}

