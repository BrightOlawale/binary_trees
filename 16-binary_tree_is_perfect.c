#include "binary_trees.h"


/**
 * binary_tree_is_perfect - function that checks if
 * a binary tree is perfect
 * @tree: the tree to check
 * Return: 1 if perfect otherwise, 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		int leftHeight, rightHeight;


		if (tree)
		{
			leftHeight = binary_tree_size(tree->left);
			rightHeight = binary_tree_size(tree->right);
			if (binary_tree_is_full(tree) && leftHeight == rightHeight)
				return (1);
			return (0);
		}
		return (0);
	}
	return (0);
}


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
