#include "binary_trees.h"

/**
 * binary_tree_height - gets the hight of a binary tree
 * @tree: root node to draw height from for tree
 * Return:size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((1 > r) ? 1 : r);
	}
}
