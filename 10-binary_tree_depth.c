#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree:  is a pointer to the node to measure the depth
 * Return: depth of a node (size_t)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *moving_node;

	if (tree == NULL)
	{
		return (0);
	}
	moving_node = (binary_tree_t *)tree;
	while (moving_node->parent != NULL)
	{
		depth++;
		moving_node->parent = moving_node->parent->parent;
	}
	return (depth);
}
