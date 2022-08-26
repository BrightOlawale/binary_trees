#include "binary_trees.h"


/**
 * binary_tree_is_full - function that checks if
 * a binary tree is full
 * @tree: the tree to check
 * Return: 1 if full otherwise, 0
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
int ch = 0;


	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			return (1);
		}
		ch = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
		return (ch);
	}
	return (0);
}
