#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put into the node
 * Return: NULL on failure else, pointer to the new node
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *head = malloc(sizeof(binary_tree_t));

	if (!head)
		return (NULL);


	head->n = value;
	head->left = NULL;
	head->right = NULL;
	head->parent = parent;

	return (head);
}
