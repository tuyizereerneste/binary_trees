#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that Counts the nodes with
 * at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 * Return: 0 If tree is NULL, else node count.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	nodes += (tree->left || tree->right) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
