#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_leaves - checks the number of leaves of a tree
 *
 * @tree: pointer to the root node
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
