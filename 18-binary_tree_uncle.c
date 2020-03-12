#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: the node to be evaluated
 * Return: Always 0 (Success)
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *uncle;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	uncle = binary_tree_sibling(parent);
	return (uncle == NULL ? NULL : uncle);
}
