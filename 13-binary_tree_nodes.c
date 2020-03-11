#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_nodes - checks for inner nodes
 *
 * @tree: the pointer to the root node
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		nodes += 1;
		if (tree->left != NULL)
			nodes += binary_tree_nodes(tree->left);
		if (tree->right != NULL)
			nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
