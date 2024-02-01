#include "binary_trees.h"

/**
 * binary_tree_insert_right - to the right
 *
 * @parent: pointer
 * @value: value
 * Return: ptr
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;

	if (parent->right == NULL)
	{
		node->right = NULL;
		node->parent = parent;
		parent->right = node;
	}
	else
	{
		node->parent = parent;
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}
