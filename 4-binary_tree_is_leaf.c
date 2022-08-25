#include "binary_trees.h"


/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: Node to check
 * Return: 1 if it is a leaf otherwise, 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
	{
		return (1);
	}
	else
		return (0);
}
