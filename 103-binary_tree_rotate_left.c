#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  left rot
 * @tree: ptr
 *
 * Return: ptr
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot, *root = tree;

	if (!tree)
		return (NULL);
	pivot = root->right;
	if (!pivot)
		return (tree);
	if (pivot->left)
		pivot->left->parent = root;
	root->right = pivot->left;
	pivot->left = root;
	pivot->parent = root->parent;
	root->parent = pivot;

	if (pivot->parent && pivot->parent->left == root)
		pivot->parent->left = pivot;
	else if (pivot->parent)
		pivot->parent->right = pivot;

	return (pivot);
}
