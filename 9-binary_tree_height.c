#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: it is a pointer to the root node of the tree
* Return: return 0 if the tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_l = 0, right_r = 0;

		left_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_l > right_r) ? left_l : right_r);
	}
	return (0);
}
