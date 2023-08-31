#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node as the left_child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The pointer to store in the node.
 * Return: A pointer to create new node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
