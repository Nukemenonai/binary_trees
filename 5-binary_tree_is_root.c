#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 *
 * @node: parent node
 * Return: 1 or 0 if root or not
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
