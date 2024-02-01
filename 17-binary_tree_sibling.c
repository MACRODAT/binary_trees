#include "binary_trees.h"

/**
 * binary_tree_sibling - sibling of a node
 *
 * @node: ptr
 * Return: pointer
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *prt;

	if (!node || !node->parent)
		return (NULL);

	prt = node->parent;
	if (node == prt->left)
		return (prt->right);

	return (prt->left);
}
