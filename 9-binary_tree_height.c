#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: a pointer to the root of the tree.
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		size_t leftHeight = binary_tree_height(tree->left);
		size_t rightHeight = binary_tree_height(tree->right);

		if (leftHeight >= rightHeight)
			return (leftHeight + 1);
		else
			return (rightHeight + 1);
	}
}

