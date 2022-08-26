#include "binary_trees.h"

/**
 * binary_tree_leaves - computes the number leaf node in a binary tree
 * @tree: binary_tree_t pointer; root node of the tree to process
 *
 * Return: size_t; number of leaf node
 * TheOwl
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* base cases */
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* recursive instruction */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
