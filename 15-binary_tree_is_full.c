#include "binary_trees.h"

/**
 * is_full - function that Checks if a binary tree is full recursively.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */

int is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				is_full(tree->left) == 0 ||
				is_full(tree->right) == 0)
		return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full(tree));
}
