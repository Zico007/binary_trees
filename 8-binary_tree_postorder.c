#include "binary_trees.h"


/**
 * binary_tree_postorder - a function that goes through a binary tree
 *	using the post-order traversal, and passes the value of each
 *	node in the tree to a callback function
 *
 * @tree: the root node of the tree
 * @func: the callback function that'll recieve the value of each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree && func))
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
