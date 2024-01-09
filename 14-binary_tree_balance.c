#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of
 * a binary tree (taken from previous task 11 with
 * slight modification)
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
 * binary_tree_balance -  measures the balance factor of
 * a binary tree
 *
 * @tree: pointer to tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


