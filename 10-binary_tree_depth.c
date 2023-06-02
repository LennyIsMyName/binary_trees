#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a binary tree.
 * @tree: the tree to find the depth for.
 * Return: the depth or zero if tree is null.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

