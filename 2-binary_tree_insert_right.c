#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return NULL;
	new->n = value;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right = new;
		new->parent = parent;
		new->right->parent = new;

	}
	else
	{
		parent->right = new;
		new->parent = parent;
		new->right = NULL;
	}
	return (new);

}
