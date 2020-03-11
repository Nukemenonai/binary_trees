#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - executes a function in preorder
 *
 * @tree: root node
 * @func: function to execute
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
