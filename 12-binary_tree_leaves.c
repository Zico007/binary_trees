#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: the root node of the tree
 *
 * Return: the number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (binary_tree_leaves(tree->right)
			+ binary_tree_leaves(tree->left));
	return (1);
}
