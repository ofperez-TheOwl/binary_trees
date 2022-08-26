#include "binary_trees.h"

/**
 * binary_tree_delete -	deletes an entire binary tree
 * @tree: binary_tree_t pointer; root of the tree to delete
 *
 * Description: traverse each branch to its deepest node and
 * recusively free backward untill root is freed
 * TheOwl
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp = tree, *tmp_del = tree;

	/* base cases */
	if (tree == NULL)
		return;
	if (tmp->left == NULL && tmp->right == NULL && tmp->parent == NULL)
	{
		free(tmp);
		return;
	}
	/* recursive instructions */
	/* traversing backward to root while freeing */
	if (tmp->left == NULL && tmp->right == NULL)
	{
		tmp_del = tmp;
		tmp = tmp->parent;
		if (tmp->left == tmp_del)
			tmp->left = NULL;
		else
			tmp->right = NULL;
		free(tmp_del);
		binary_tree_delete(tmp);
	}
	/* traversing forward to leafs */
	if (tmp->left == NULL && tmp->right != NULL)
		binary_tree_delete(tmp->right);
	else
		binary_tree_delete(tmp->left);
}
