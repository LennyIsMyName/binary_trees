#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child.
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 * Return: the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *temp, *nod;

	nod = binary_tree_node(parent, value);
	if (parent == NULL || nod == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = nod;
		nod->parent = parent;
		return (nod);
	}
	else
	{
		temp = parent->right;
		temp->parent = nod;
		parent->right = nod;
		nod->parent = parent;
		nod->right = temp;
		return (nod);
	}
}

