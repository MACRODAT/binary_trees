#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  left rot
 * @tree: ptr
 *
 * Return: ptr
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node, *parent = tree;

	if (!tree)
		return (NULL);
	node = parent->right;
	if (!node)
		return (tree);
	if (node->left)
		node->left->parent = parent;
	parent->right = node->left;
	node->left = parent;
	node->parent = parent->parent;
	parent->parent = node;

	if (node->parent && node->parent->left == parent)
		node->parent->left = node;
	else if (node->parent)
		node->parent->right = node;

	return (node);
}
