#include "binary_trees.h"


/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 * @tree: the tree to measure
 * Return: the depth in integer else 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (binary_tree_depth(tree->parent) + 1);

	return (0);
}
