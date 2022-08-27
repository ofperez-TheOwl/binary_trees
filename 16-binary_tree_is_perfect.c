#include "binary_trees.h"

/**
 * power - returns the value of x raised to the power of y
 * @x: int; value to exponentiate
 * @y: int; power to raise x to
 *
 * Return: int; x to the power of y
 * TheOwl
 */
int power(int x, int y)
{
	/* base case */
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	/* recursive instruction */
	return (x * power(x, y - 1));
}

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
 * binary_tree_size - computes the size of a binary tree
 * @tree: binary_tree_t pointer; root node of the tree to process
 *
 * Return: size_t; size of tree (every nodes of the tree)
 * TheOwl
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: binary_tree_t pointer; root node of the tree to process
 *
 * Return: int; 1 if tree is perfect and 0 if not
 * Description: size of perfect binary tree == pow(2, height + 1) – 1
 * TheOwl
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (power(2, height + 1) - 1 == size);
}
