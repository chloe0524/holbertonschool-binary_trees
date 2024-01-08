#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 *
 * @parent: pointer to parent node of the new node
 * @value: value for new node
 * Return: new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);

	if (new_node->left == NULL)
		parent->left = new_node;
	new_node->left = parent->left;
	parent->left->parent = new_node;
	parent->left = new_node;
}
