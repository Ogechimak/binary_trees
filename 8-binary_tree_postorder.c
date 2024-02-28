#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 * @tree: this is a pointer to the root node of the tree to traverse
 * @func: this is the pointer to a func to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
