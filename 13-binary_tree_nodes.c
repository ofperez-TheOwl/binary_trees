#include "binary_trees.h"

/**
 * binary_tree_nodes - computes the number nodes with
 * at least 1 child in a binary tree
 * @tree: binary_tree_t pointer; root node of the tree to process
 *
 * Return: size_t; number of nodes with at least 1 child
 * TheOwl
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
}

/*
 * other implementation
 * Description: tree_size - tree_leaves is all nodes with 1 or 2 children
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
*/
