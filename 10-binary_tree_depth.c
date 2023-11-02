#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: 0 If tree is NULL, else the depth of a node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
