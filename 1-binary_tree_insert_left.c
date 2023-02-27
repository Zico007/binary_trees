#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the
 *	left-child of another node
 *
 * @parent: the new node's parent
 * @value: the value to assign to the new node
 *
 * Return: the new node or NULL if malloc failed or @parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	node->left = parent->left;
	if (node->left)
		node->left->parent = node;
	parent->left = node;
	return (node);
}
