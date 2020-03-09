#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return NULL;
	new->n = value;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = new;
		new->parent = parent;
		new->left->parent = new;

	}
	else
	{
		parent->left = new;
		new->parent = parent;
		new->left = NULL;
	}
	return (new);
}
