#include "binary_trees.h"

int treeHeight(binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks whether a binary tree is perfect.
 * @tree: a pointer to the binary tree.
 * Return: 1 if true, else 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	int left_height = treeHeight(tree->left);
	int right_height = treeHeight(tree->right);

	if (left_height != right_height)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

/**
 * treeHeight - calculates the height of a binary tree
 * @tree: a pointer to the root.
 * Return: height.
 */

int treeHeight(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int leftHeight = treeHeight(tree->left);
	int rightHeight = treeHeight(tree->right);

	return ((leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1));
}

