#include "binary_trees.h"


/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: a node in the binary tree
 *
 * Return: the depth of a node in a tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
