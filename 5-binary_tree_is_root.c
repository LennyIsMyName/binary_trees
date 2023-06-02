#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the given node is a root.
 * @node: the node to check.
 * Return: 1 if node is a root or else 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
