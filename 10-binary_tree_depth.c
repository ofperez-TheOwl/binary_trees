#include "binary_trees.h"

/**
 * binary_tree_depth - computes the depth of a node in a binary tree
 * @tree: binary_tree_t pointer; node of the tree to process
 *
 * Return: size_t; depth of node
 * TheOwl
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
