#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: binary_tree_t pointer; node to check
 * Return: return 1 if root and 0 if not
 * TheOwl
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
