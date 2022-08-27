#include "binary_trees.h"

/**
 * binary_tree_depth - computes the depth of a node in a binary tree
 * @tree: binary_tree_t pointer; node of the tree to process
 *
 * Return: size_t; depth of node
 * TheOwl
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestors
 * of two nodes in a binary tree
 * @first: binary_tree_t pointer; node to process
 * @second: binary_tree_t pointer; node to process
 *
 * Return: binary_tree_t; ancestor of first and second or NULL
 * TheOwl
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int delta_depth, i;

	if (first == NULL || second == NULL || first->parent == NULL ||
			second->parent == NULL)
		return (NULL);

	delta_depth = (int)(binary_tree_depth(first) - binary_tree_depth(second));

	if (delta_depth < 0)
	{
		delta_depth = -1 * delta_depth;
		for (i = 0; i < delta_depth; i++)
		{
			if (second->parent == first)
				return ((binary_tree_t *)(first));
			printf("checking for second is deeper\n");
			second = second->parent;
		}
	}
	else if (delta_depth > 0)
	{
		for (i = 0; i < delta_depth; i++)
		{
			if (first->parent == second)
				return ((binary_tree_t *)(second));
			printf("checking for first is deeper\n");
			first = first->parent;
		}
	}

	while (first->parent != NULL || second->parent != NULL)
	{
		if (first->parent == second->parent)
			return (first->parent);
		printf("checking while\n");
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}
