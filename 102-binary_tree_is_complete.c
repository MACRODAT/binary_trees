#include "binary_trees.h"

/**
 * binary_tree_count - counter
 * @root:  node
 *
 * Return: Number odes
 */

int binary_tree_count(binary_tree_t *root)
{
	if (!root)
		return (0);

	return (1 + binary_tree_count(root->left) + binary_tree_count(root->right));
}


/**
 * is_complete - checker
 * @root: ptr root
 * @ind: ind
 * @n: nbr
 *
 * Return: 1 the tree is complete
 */

int is_complete(binary_tree_t *root, int ind, int n)
{
	if (!root)
		return (0);

	if (ind >= n)
		return (0);
	if (!root->left && !root->right)
		return (1);
	if (root->right && !root->left)
		return (0);
	if (root->left && !root->right)
		return (is_complete(root->left, ind * 2 + 1, n));

	return (is_complete(root->left, ind * 2 + 1, n) &&
		is_complete(root->right, ind * 2 + 2, n));
}

/**
 * binary_tree_is_complete - bst complet?
 * @tree: Ptr
 *
 * Return: 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nod;
	binary_tree_t *root;

	if (!tree)
		return (0);

	root = (binary_tree_t *)tree;
	nod = binary_tree_count(root);

	return (is_complete(root, 0, nod));
}
