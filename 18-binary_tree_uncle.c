#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the sibling to a given node.
 * @node: the node.
 * Return: a pointer to the sibling.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *Node;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	Node = parent;
	parent = parent->parent;

	if (parent->left == Node)
		return (parent->right);
	else
		return (parent->left);
}
