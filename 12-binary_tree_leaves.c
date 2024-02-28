#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves
 * @tree: is a pointer to the root node of the tree
 * Return: return 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_count = 0;

	if (tree)
	{
		leaves_count += (!tree->left && !tree->right) ? 1 : 0;
		leaves_count += binary_tree_leaves(tree->left);
		leaves_count += binary_tree_leaves(tree->right);
	}
	return (leaves_count);
}
