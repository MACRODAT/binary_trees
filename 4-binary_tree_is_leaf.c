#include "binary_trees.h"

/**
 * binary_tree_is_leaf - node leaf?
 *
 * @node: pointer
 * Return: 1 if node is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!(node->left) && !(node->right));
}
