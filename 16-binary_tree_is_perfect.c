#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - to checks if a node is a leaf
 * @node: is a ppointer to the node
 * Return: return 1 if the node is a leaf, otherwise, 0.
 */

unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - to returns the depth of a given node
 * @tree: is a pointer to the node
 * Return: return the depth of node.
 */

size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - to returns a leaf of a binary tree.
 * @tree: is a pointer to the root node
 * Return: returns a pointer to the first encountered leaf.
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - to checks if a binary tree is perfect recursively.
 * @tree: is a pointer to the root node
 * @leaf_depth: is the depth of one leaf in the binary tree.
 * @level: is the level of current node.
 * Return: return 1 if the tree is perfect, otherwise 0.
 */

int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - to checks if a binary tree is perfect.
 * @tree: is a pointer to the root node
 * Return: return 0 if tree is NULL or not perfect, otherwise, 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
