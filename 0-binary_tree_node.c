#include "binary_trees.h"

/**
 * binary_tree_node - bin tree creation
 * @parent: pqr
 * @value: value
 * Return: ptr to created
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
