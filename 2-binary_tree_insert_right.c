#include "binary_trees.h"


/**
 * binary_tree_insert_right - Inserts a node as right child of parent
 * @parent: Pointer to root node.
 * @value: Value to insert in node.
 * Return: Pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));
	binary_tree_t *rightChild = malloc(sizeof(binary_tree_t));


	if (!temp || !parent || !rightChild)
		return (NULL);

	rightChild->n = value;
	rightChild->right = NULL;
	rightChild->right = NULL;


	if (parent->right == NULL)
	{
		parent->right = rightChild;
		rightChild->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = rightChild;
		rightChild->right = temp;
		rightChild->parent = parent;
		rightChild->right->parent = rightChild;
	}

	return (rightChild);
}
