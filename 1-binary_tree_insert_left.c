#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts a node as left child of parent
 * @parent: Pointer to root node.
 * @value: Value to insert in node.
 * Return: Pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild = malloc(sizeof(binary_tree_t));


	if (!parent || !leftChild)
	{
		free(leftChild);
		return (NULL);
	}

	leftChild->n = value;
	leftChild->left = NULL;
	leftChild->right = NULL;
	leftChild->parent = parent;


	if (parent->left == NULL)
	{
		parent->left = leftChild;
	}
	else
	{
		leftChild->left = parent->left;
		parent->left->parent = leftChild;
		parent->left = leftChild;
	}

	return (leftChild);
}
