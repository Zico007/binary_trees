#include "binary_trees.h"


/**
 * binary_tree_height - measures the heigh of a binary tree
 *
 * @tree: the root node of the binary tree
 *
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_right, max, height = 0;

	if (!tree)
		return (0);
	if (tree->right || tree->left)
		height = 1;
	h_right = binary_tree_height(tree->right);
	max = binary_tree_height(tree->left);

	if (h_right > max)
		max = h_right;
	return (height + max);
}
