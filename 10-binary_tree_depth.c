#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: the root node
 * Return: 0 If tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	if (!tree)
		return (0);

	d = tree->parent ? binary_tree_depth(tree->parent) + 1 : 0;

	return (d);
}
