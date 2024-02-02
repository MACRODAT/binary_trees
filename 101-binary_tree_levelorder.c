#include "binary_trees.h"

/**
 * binary_tree_level_cur - tree
 * @tree: ptr
 * Return: Tre
 */
size_t	binary_tree_level_cur(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (!tree)
		return (0);
	if (tree->left)
		hleft = 1 + binary_tree_level_cur(tree->left);
	if (tree->right)
		hright = 1 + binary_tree_level_cur(tree->right);

	if (hleft > hright)
		return (hleft);
	return (hright);
}

/**
 * print_level_order - print
 * @tree: pointer
 * @level: level
 * @func: pointer
 * Return: void
 */
void print_level_order(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level_order(tree->left, level - 1, func);
		print_level_order(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - function
 * @tree: ptr
 * @func: ptr
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0;
	int i = 1;

	if (!tree || !func)
		return;

	height = binary_tree_level_cur(tree) + 1;

	while (i <= height)
	{
		print_level_order(tree, i, func);
		i++;
	}
}
