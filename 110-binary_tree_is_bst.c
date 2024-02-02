#include "binary_trees.h"

/**
 * isBST - Comparee
 *
 * @tree: ptr
 * @min: min
 * @max: max
 *
 * Return: 1 if success
 */
int isBST(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (
		isBST(tree->left, min, tree->n - 1) &&
		isBST(tree->right, tree->n + 1, max)
	);
}

/**
 * binary_tree_is_bst - checks if a binary tree is BST
 *
 * @tree: ptr
 * Return: 1 if success
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (isBST(tree, INT_MIN, INT_MAX));
}
