#include "binary_trees.h"


/**
 * is_full_recursive - klab wa al
 * @tree: di root ta
 * Return: ila mr
 */


int is_full_recursive(const binary_tree_t *tree)

{

	if (tree != NULL)
	{

		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);

	}
		return (1);

}

/**
 * binary_tree_is_full - waz ama
 * @tree: nakat tal
 * Return: rad fi
 */


int binary_tree_is_full(const binary_tree_t *tree)

{

	if (tree == NULL)
	return (0);
		return (is_full_recursive(tree));

}
