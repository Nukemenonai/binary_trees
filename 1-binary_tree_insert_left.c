#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node to the left
 *
 * @parent: parent node
 * @value: value to insert
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = binary_tree_node(parent, value);

	if (!parent || !new)
	{
		free(new);
		return (NULL);
	}
	if (parent->left)
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
