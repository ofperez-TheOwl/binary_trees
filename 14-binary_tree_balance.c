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

/**
 * binary_tree_balance - computes the balance factor of a binary tree
 * @tree: binary_tree_t pointer; root node of the tree to process
 *
 * Return: int; balance factor of tree
 * Description: left_tree _height - right_tree_height == balance factor
 * TheOwl
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = -1, right_h = -1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_h = (int)binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_h = (int)binary_tree_height(tree->right);
	return (left_h - right_h);
}
