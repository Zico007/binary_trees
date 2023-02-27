#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: the node's parent
 * @value: the value to be held by the created node
 *
 * Return: new node or NULL if malloc failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;

	return (node);
}
