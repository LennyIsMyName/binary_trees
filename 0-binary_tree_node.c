#include "binary_trees.h"

/**
 * binary_tree_node - creates a node.
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 * Return: a poiner to the new node or null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nod = malloc(sizeof(binary_tree_t));

	if (nod != NULL)
	{
		nod->n = value;
		nod->parent = parent;
		nod->left = NULL;
		nod->right = NULL;
	}
	return (nod);
}
