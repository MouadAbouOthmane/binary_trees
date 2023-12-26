#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}


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
