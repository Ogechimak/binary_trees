#include "binary_trees.h"

/**
 * is_full_recursive - to checks if a binary tree is full recursively.
 * @tree: is a pointer to the root node.
 * Return: return 0 if tree is NULL.
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL) ||
			is_full_recursive(tree->left) == 0 ||
			is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - to checks if a binary tree is full.
 * @tree: is a pointer to the root node
 * Return: return 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
