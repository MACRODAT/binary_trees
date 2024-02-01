#include "binary_trees.h"

/**
 * binary_tree_is_root - a root
 *
 * @node: pointer
 * Return: 1 if node is a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
