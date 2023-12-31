#include "binary_trees"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * does not have any child neither left or right
 * @node: nodes is binary trees
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
