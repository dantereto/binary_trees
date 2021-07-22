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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: pointer to (binary_tree_t) lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t depth_first;
	size_t depth_second;

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);
	if (depth_first == depth_second)
	{
		if (first->n == second->n)
		{
			return ((binary_tree_t *)first);
		}
		return (binary_trees_ancestor(first->parent, second->parent));
	}
	if (depth_first < depth_second)
	{
		return (binary_trees_ancestor(first, second->parent));
	}
	if (depth_first > depth_second)
	{
		return (binary_trees_ancestor(first->parent, second));
	}
	else
		return (NULL);
}
