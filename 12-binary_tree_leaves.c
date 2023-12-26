#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the root node
 * Return: 0 If tree is NULL.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);

	s += binary_tree_is_leaf(tree);
	s += binary_tree_leaves(tree->left);
	s += binary_tree_leaves(tree->right);

	return (s);
}
