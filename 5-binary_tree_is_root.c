#include "binary_trees.h"


/**
 * binary_tree_is_root - kalab wach mz
 * @node: tadi nod
 * Return: ya walo ya wahad
 */


int binary_tree_is_root(const binary_tree_t *node)

{

	if (node == NULL || node->parent != NULL)
	return (0);

	return (1);

}
