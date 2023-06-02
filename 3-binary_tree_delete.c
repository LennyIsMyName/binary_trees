#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire binary tree recursively.
 * @tree: the root of the tree.
 * Return: nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}