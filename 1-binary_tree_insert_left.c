#include "binary_trees.h"

/**
 * binary_tree_insert_left - this Insets a node as a left-child of
 *                           of another in a binary tree.
 * @parent: this Points to the node to insert the left-child in.
 * @value: The value to be ston the new node.
 *
 * Return: is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: ths already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
