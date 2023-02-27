#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 *	right-child of another node
 *
 * @parent: the new node's parent
 * @value: the value to assign to the new node
 *
 * Return: the new node or NULL if malloc failed or @parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	node->right = parent->right;
	if (node->right)
		node->right->parent = node;
	parent->right = node;
	return (node);
}
