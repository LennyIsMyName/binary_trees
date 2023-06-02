#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling to a given node.
 * @node: the node.
 * Return: a pointer to the sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
