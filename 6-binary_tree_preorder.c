#include "binary_trees.h"


/**
 * binary_tree_preorder - a function that goes through a binary tree
 *	using the pre-order traversal, and passes the value of each
 *	node in the tree to a callback function
 *
 * @tree: the rooot node of the tree
 * @func: the callback function that'll recieve the value of each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree && func))
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
