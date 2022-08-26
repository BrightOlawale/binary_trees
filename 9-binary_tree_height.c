#include "binary_trees.h"


/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: The tree to measure
 * Return: Height of the tree in interger
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lHeight = 0;
		size_t rHeight = 0;

		lHeight = tree->left ? binary_tree_height(tree->left) + 1 : lHeight + 0;
		rHeight = tree->right ? binary_tree_height(tree->right) + 1 : rHeight + 0;
		return ((lHeight > rHeight) ? lHeight : rHeight);
	}
	else
		return (0);
}
