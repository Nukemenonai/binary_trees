#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		new->parent = NULL;
	else
		new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;

	return (new);
}