#include "binary_trees.h"


/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: the tree to measure
 * Return: size of tree in integer else 0
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t treeSize = 0;


	if (tree)
	{
		treeSize = treeSize + 1;
		treeSize += binary_tree_size(tree->left);
		treeSize += binary_tree_size(tree->right);
		return (treeSize);
	}
	return (0);
}
