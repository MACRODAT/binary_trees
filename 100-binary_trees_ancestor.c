#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowes
 * @first: Pointer
 * @second: Pointer
 *
 * Return: Pointer
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *my_ans, *s_anc;

	for (my_ans = first; my_ans != NULL; my_ans = my_ans->parent)
		for (s_anc = second; s_anc != NULL; s_anc = s_anc->parent)
			if (my_ans == s_anc)
				return ((binary_tree_t *)my_ans);
	return (NULL);
}
