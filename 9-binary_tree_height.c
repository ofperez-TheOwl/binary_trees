#include "binary_trees.h"

/**
 * binary_tree_height - computes the height of a binary tree
 * @tree: binary_tree_t pointer; root node of the tree to process
 *
 * Return: size_t; height of tree
 * TheOwl
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	/* base case */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	/* recursive instructions */
	left_height = 1 + binary_tree_height(tree->left);
	right_height = 1 + binary_tree_height(tree->right);
	/* conclusion */
	if (left_height >= right_height)
		return (left_height);
	return (right_height);
}

/*
 *other implementation
 *if (tree == NULL)
 *	return (0);
 *left_height =  tree->left != NULL ? binary_tree_height(tree->left) + 1 : 0;
 *right_height = tree->right != NULL ? binary_tree_height(tree->right) + 1 : 0;
*/
