#include "binary_trees.h"

/**
 * binary_tree_size - function that measures sizes of a binary tree
 * @tree: this is a pointer to the root node of the tree
 * Return: return 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_all = 0;

	if (tree)
	{
		size_all += 1;
		size_all += binary_tree_size(tree->left);
		size_all += binary_tree_size(tree->right);

	}
	return (size_all);
}
