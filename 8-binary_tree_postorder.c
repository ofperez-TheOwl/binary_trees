#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree using post-order traversal
 * @tree: binary_tree_t; root node of the tree
 * @func: function pointer; function to call on node
 *
 * Return: nothing
 * Description: node value must be pass to func
 * TheOwl
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
