#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				binary_tree_is_full(tree->left) == 0 ||
				binary_tree_is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}
