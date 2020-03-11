#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size = 0;
	const binary_tree_t *tmp = tree;

	if (!tree)
		return (0);
	else
	{
		if (tmp->parent)
		{
			while (tmp->parent)
			{
				tmp = tmp->parent; 
				size += 1;
			}
		}
	}
	return (size);
}
