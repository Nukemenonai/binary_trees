#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node to the right
 *
 * @parent: parent node
 * @value: value to insert
 * Return: new node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = binary_tree_node(parent, value);

	if (!parent || !new)
	{
		free(new);
		return (NULL);
	}
	if (parent->right)
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
