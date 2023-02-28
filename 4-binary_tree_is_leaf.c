#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: a node in a binary tree
 *
 * Return:
 *	0 if node is NULL
 *	0 if node is not a leaf	
 *	1 if node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !(node->left || node->right));
}
