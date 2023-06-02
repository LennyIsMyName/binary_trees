#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a binary tree.
 * @tree: a pointer to the tree to find the size for.
 * Return: size of the tree or 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
