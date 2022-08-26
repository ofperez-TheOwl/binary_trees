#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree using pre-order traversal
 * @tree: binary_tree_t; root node of the tree
 * @func: function pointer; function to call on node
 *
 * Return: nothing
 * Description: node value must be pass to func
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
