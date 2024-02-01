#include "binary_trees.h"

/**
 * search_uncle - bst
 * @node: node
 * Return: search
 */
binary_tree_t *search_uncle(binary_tree_t *node)
{
	binary_tree_t *father = NULL;

	if (!node || !(node->parent))
		return (NULL);

	father = node->parent;

	if (father->left && (father->left != node))
		return (father->left);
	else if (father->right && (father->right != node))
		return (father->right);
	return (NULL);
}

/**
 * binary_tree_uncle - bst
 * @node: node
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (search_uncle(node->parent));
}
