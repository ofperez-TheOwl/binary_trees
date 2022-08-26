#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: binary_tree_t; root node of the tree to traverse
 * @func: function pointer; function to call for each node. The value in the
 * node must be passed as a parameter to this function.
 * Return: nothing
 * TheOwl
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
