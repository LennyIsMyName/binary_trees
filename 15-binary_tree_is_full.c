#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_is_full - checks whether a tree is a full tree.
 * @tree: a pointer to the root of the tree.
 * Return: 1 if full or 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
