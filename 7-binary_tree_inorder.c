#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a tree using in-order.
 * @tree: a pointer to the root of the tree.
 * @func: a pointer to the function to execute for each node.
 * Return: nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
