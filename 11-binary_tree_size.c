#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root node
 * Return: 0 If tree is NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	s++;

	s += tree->left ? binary_tree_size(tree->left) : 0;
	s += tree->right ? binary_tree_size(tree->right) : 0;

	return (s);
}
