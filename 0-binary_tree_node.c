#include "binary_trees.h"

/**
 * binary_tree_node - adds a new node in a given tree
 * @parent: binary_tree_t pointer; parent node of the new node
 * @value: int; number stored in this node
 *
 * Return: binary_tree_t pointer; pointer to new node or NULL if failure
 * TheOwl
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* allocate space for new node and set value */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent == NULL)
	{
		new_node->parent = NULL;
		return (new_node);
	}
	new_node->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new_node;
		return (new_node);
	}
	if (parent->right == NULL)
	{
		parent->right = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
