#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree:pointer to the root node of the tree to check
 * Return: return 1 if binary tree full 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
int right = 0, left = 0;
if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
	return (1);
right = binary_tree_is_full(tree->right);
left = binary_tree_is_full(tree->left);
if (right == 1 && left == 1)
	return (1);
return (0);
}
