#include "binary_trees.h"


/**
 * binary_tree_postorder - kta3 man
 * @tree: bach ikta
 * @func: dala nod dyal
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

{

	if (tree && func)
	{

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);

	}

}
