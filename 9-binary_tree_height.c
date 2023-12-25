#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node
 * Return: the tree measures height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t hl, hr;    

	hl = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	hr = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return ((hl > hr) ? hl : hr);
}
