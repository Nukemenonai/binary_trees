#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a node has all its childs full
 *
 * @tree: the porinter to the node to eval
 * Return: 1 if true 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return (left && right ? 1 : 0);
}
