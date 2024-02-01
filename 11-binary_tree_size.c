#include "binary_trees.h"

/**
 * binary_tree_size - size
 *
 * @tree: ptr
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (!tree)
		return (0);

	count += binary_tree_size(tree->right);
	count += binary_tree_size(tree->left);

	return (count);
}
