#include "binary_trees.h"
/**
 * binary_tree_nodes - coounts all the nodes which are not leaves.
 * @tree: a pointer to the root of the tree.
 * Return: number of nodes or 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = 0;

	if (tree->left != NULL || tree->right != NULL)
		count++;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
