#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  checks if a node is a leaf
 * @node: binary_tree_t pointer; node to check
 * Return: return 1 if leaf and 0 if not
 * TheOwl
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
