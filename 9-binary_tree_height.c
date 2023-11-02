#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node
 * Return: the tree measures height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cl = 0;
	size_t cr = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		cl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		cr = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((cr > cl) ? cr : cl);
	}
}
