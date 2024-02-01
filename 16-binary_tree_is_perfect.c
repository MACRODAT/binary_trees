#include "binary_trees.h"

/**
 * get_nodes - compare size
 *
 * @tree: pointer to the root
 * Return: size
 */
int get_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (get_nodes(tree->left) + 1 + get_nodes(tree->right));
}

/**
 * binary_tree_is_perfect - binary tree is perfect
 *
 * @tree: pointer
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_left = get_nodes(tree->left);
	h_right = get_nodes(tree->right);

	if ((h_left - h_right) == 0)
		return (1);

	return (0);
}
