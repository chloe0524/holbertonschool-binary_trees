#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node of the new node.
 * @value: Value for the new node.
 * Return: Pointer to the new node or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node)
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = new_node->right = NULL;
	}

}

