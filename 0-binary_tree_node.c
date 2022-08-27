#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node tree
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

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
