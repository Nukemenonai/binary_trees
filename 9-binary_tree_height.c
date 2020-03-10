#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *
 *
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sizer = 0;
	size_t sizel = 0;
	if (!tree)
		return (0);

	if (tree->left)
	{
		sizel += binary_tree_height(tree->left);
		sizel += 1;
	}
	if (tree->right)
	{
		sizer += binary_tree_height(tree->right);
		sizer += 1;
	}
	return (sizer > sizel ? sizer : sizel);

}
