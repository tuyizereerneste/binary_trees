#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Description: If parent already has a left-child,
 * the new node must take its place, and the old left-child
 * must be set as the left-child of the new node.
 *
 * Return: if parent is NULL - NULL
 *	Otherwise: a pointer to the node to insert the left-child in
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);
	new_left_node = binary_tree_node(parent, value);
	if (new_left_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}
	parent->left = new_left_node;
	return (new_left_node);
}
