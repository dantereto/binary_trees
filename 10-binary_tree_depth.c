#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree:  is a pointer to the node to measure the depth
 * Return: depth of a node (size_t)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		cont++;
		tree = tree->parent;
	}
	return (cont);
}
