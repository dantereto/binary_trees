#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: binary tree size (size_t)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree != NULL)
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
else
return (0);
}
