#include "binary_trees.h"


/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: the tree to take calculation
 * Return: balance factor in int
 */



int binary_tree_balance(const binary_tree_t *tree)
{
	int bFactor;


	if (tree)
	{
		bFactor = binary_tree_height(tree->left) - binary_tree_height(tree->right);
		return (bFactor);
	}
	return (0);
}

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

		lHeight = tree->left ? binary_tree_height(tree->left) + 1 : lHeight + 1;
		rHeight = tree->right ? binary_tree_height(tree->right) + 1 : rHeight + 1;
		return ((lHeight > rHeight) ? lHeight : rHeight);
	}
	else
		return (0);
}
