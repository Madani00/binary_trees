#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent
 * @value: value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}