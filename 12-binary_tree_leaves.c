#include "binary_trees.h"


/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: the tree to count from
 * Return: the number of leaves else 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafCount = 0;


	if (tree)
	{
		if (!tree->left && !tree->right)
			leafCount += 1;
		leafCount += binary_tree_leaves(tree->left);
		leafCount += binary_tree_leaves(tree->right);
		return (leafCount);
	}
	return (0);
}
