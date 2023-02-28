#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root
 *
 * @node: a node in a binary tree
 *
 * Return:
 *	0 if node is NULL
 *	0 if node is not the root
 *	1 if node is the root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
