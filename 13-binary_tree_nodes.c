#include "binary_trees.h"

/**
 * binary_tree_node - counts the number of nodes with at least
 *	one child
 *
 * @tree: the root node of the tree
 *
 * Return: the number of nodes in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		nodes += 1;
	return (nodes + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));
}
