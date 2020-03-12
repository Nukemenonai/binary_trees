#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds out the sibling of a node
 *
 * @node: the node to evaluate
 * Return: Always 0 (Success)
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);
	tmp = node->parent;
	sibling = (tmp->left == node ? tmp->right : tmp->left);
	return (sibling == NULL ? NULL : sibling);
}
