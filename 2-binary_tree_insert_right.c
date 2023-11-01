#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Description: If parent already has a right-child,
 * the new node must take its place, and the old right-child
 * must be set as the right-child of the new node.
 *
 * Return: if parent is NULL - NULL
 *	Otherwise: a pointer to the node to insert the right-child in
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);
	new_right_node = binary_tree_node(parent, value);
	if (new_right_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}
	parent->right = new_right_node;
	return (new_right_node);
}
