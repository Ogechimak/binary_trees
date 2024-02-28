#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: is a pointer to the root node
 * Return: return 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node
 * Return: return 0 if the tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_l = 0, right_r = 0;

	if (tree)
	{
		left_l = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;

		right_r = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
		return (left_l > right_r ? left_l : right_r);
	}
	return (0);
}
