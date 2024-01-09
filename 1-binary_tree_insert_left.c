#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode = binary_tree_node(parent, value);
	
	if (!newnode)
		return (NULL);

	newnode->left = parent->left;

	if (newnode->left != NULL)
		newnode->left->parent = newnode;

	parent->left = newnode;

	return (newnode);
}
