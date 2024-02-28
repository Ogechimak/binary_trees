#include "binary_trees.h"

/**
 *binary_tree_inorder - function that goes through a binary tree
 *@tree: this is a pointer to the root node
 *@func: this is a pointer to a func to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
	return;
	}
	binary_tree_postorder(tree->left, func);
	func(tree->n);
	binary_tree_postorder(tree->right, func);

}
