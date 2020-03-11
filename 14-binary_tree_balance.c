#include <stdlib.h>
#include <stdio.h>
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - checks balance factor of a tree
 *
 * @tree: the pointer to the root node
 * Return: positive or negative factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int heightr = 0;
	int heightl = 0;
	int balance = 0;

	if (!tree)
		return (0);

	heightl = binary_tree_height(tree->left);
	heightr = binary_tree_height(tree->right);

	balance = heightl - heightr;
	balance -= tree->right ? 0 : -1;
	balance += tree->left ? 0 : -1;
	return (balance);
}
