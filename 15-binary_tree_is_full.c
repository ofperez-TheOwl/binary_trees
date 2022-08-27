#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: binary_tree_t pointer; root node of the tree to process
 *
 * Return: int; 1 if tree is full and 0 if not
 * Description: traverse tree and stop if a parent with one child is found
 * TheOwl
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* base cases */
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	/* recursive instruction */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	/* base case one child */
	return (0);
}
