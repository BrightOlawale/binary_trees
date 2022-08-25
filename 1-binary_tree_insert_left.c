#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts a node as left child of parent
 * @parent: Pointer to root node.
 * @value: Value to insert in node.
 * Return: Pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));
	binary_tree_t *leftChild = malloc(sizeof(binary_tree_t));


	if (!temp || !parent || !leftChild)
		return (NULL);

	leftChild->n = value;
	leftChild->left = NULL;
	leftChild->right = NULL;


	if (parent->left == NULL)
	{
		parent->left = leftChild;
		leftChild->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = leftChild;
		leftChild->left = temp;
		leftChild->parent = parent;
		leftChild->left->parent = leftChild;
	}

	return (leftChild);
}
