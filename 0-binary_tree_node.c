#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent
 * @value: value
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	my_node = malloc(sizeof(binary_tree_t));
	if (my_node == NULL)
		return (NULL);

	my_node->parent = parent;
	my_node->n = value;
	my_node->left = NULL;
	my_node->right = NULL;
	return (my_node);
}
