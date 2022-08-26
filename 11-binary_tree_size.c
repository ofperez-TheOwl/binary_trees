#include "binary_trees.h"

/**
 * binary_tree_size - computes the size of a binary tree
 * @tree: binary_tree_t pointer; root node of the tree to process
 *
 * Return: size_t; size of tree
 * TheOwl
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
