#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a new node in a given tree as right child
 * @parent: binary_tree_t pointer; parent node of the new node
 * @value: int; number stored in this new node
 *
 * Return: binary_tree_t pointer; pointer to new node or NULL if failure
 * Description: if right-child exist, new node take its place
 * and old right-child becomes right-child new node
 * TheOwl
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	/* allocate space for new node and set value */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
