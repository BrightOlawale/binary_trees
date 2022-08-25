#include "binary_trees.h"


/**
 * binary_tree_insert_right - Inserts a node as right child of parent
 * @parent: Pointer to root node.
 * @value: Value to insert in node.
 * Return: Pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild = malloc(sizeof(binary_tree_t));


	if (!parent || !rightChild)
	{
		free(rightChild);
		return (NULL);
	}

	rightChild->n = value;
	rightChild->left = NULL;
	rightChild->right = NULL;
	rightChild->parent = parent;


	if (parent->right == NULL)
	{
		parent->right = rightChild;
	}
	else
	{
		rightChild->right = parent->right;
		parent->right->parent = rightChild;
		parent->right = rightChild;
	}

	return (rightChild);
}
