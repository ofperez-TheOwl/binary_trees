#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sinbling of a node in a binary tree
 * @node: binary_tree_t pointer; node to process
 *
 * Return: binary_tree_t; sinbling of node or NULL
 * TheOwl
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: binary_tree_t pointer; node to process
 *
 * Return: binary_tree_t; uncle of node or NULL
 * TheOwl
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	return (binary_tree_sibling(node->parent));
}
