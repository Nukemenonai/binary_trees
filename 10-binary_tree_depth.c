#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - checks the depth of a node
 *
 * @tree: the pointer to the node
 * Return: depth as size_t
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size = 0;
	const binary_tree_t *tmp = tree;

	if (!tree)
		return (0);
	if (tmp->parent)
	{
		while (tmp->parent)
		{
			tmp = tmp->parent;
			size += 1;
		}
	}

	return (size);
}
