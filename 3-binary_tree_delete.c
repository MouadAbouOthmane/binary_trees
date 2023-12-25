#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: the root node of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->left)
	{
		binary_tree_delete(tree->left);
		tree->left = NULL;
	}
	if (tree->right)
	{
		binary_tree_delete(tree->right);
		tree->right = NULL;
	}
	if (!tree->left && !tree->right)
		free(tree);
}
