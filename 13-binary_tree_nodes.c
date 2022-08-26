#include "binary_trees.h"


/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: the tree to count
 * Return: the number of count in integer
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t countNode = 0;


	if (tree)
	{
		if (tree->left || tree->right)
			countNode += 1;
		countNode += binary_tree_nodes(tree->left);
		countNode += binary_tree_nodes(tree->right);
		return (countNode);
	}
	return (0);
}
