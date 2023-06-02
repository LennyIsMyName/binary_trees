#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a tree.
 * @tree: a pointer to the root.
 * Return: the balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int leftHeight = (int) binary_tree_height(tree->left);
	int rightHeight = (int) binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}


/**
 * binary_tree_height - finds the height of a binary tree.
 * @tree: a pointer to the root.
 * Return: the height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
