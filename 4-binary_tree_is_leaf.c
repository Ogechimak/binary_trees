#include "binary_trees.h"

/**
 * binary_tree_is_leaf - unction that checks if a node is a leaf
 * @node: this is a Pointer to the node to check
 * Return: return 1 if node is a leaf otherwise return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
