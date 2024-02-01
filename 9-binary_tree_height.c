#include "binary_trees.h"

/**
 * binary_tree_height - heu
 *
 * @tree: pointer
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (binary_tree_is_leaf(tree))
		return (1);
	if (tree->left)
		h_left = binary_tree_height(tree) + 1;
	if (tree->right)
		h_right = binary_tree_height(tree) + 1;
	if (h_left > h_right)
		return (h_left);
	return (h_right);
}
