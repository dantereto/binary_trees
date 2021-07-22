#include "binary_trees.h"

/**
* binary_tree_uncle - function that finds the uncle of a node
* @node: is a pointer to the node to find the uncle
* Return: uncle of node.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL ||
		node->parent->parent->left == NULL ||
		node->parent->parent->right == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	/* EDGE case parent and ucle with same value */
	if (node->parent->parent->right->n == node->parent->n &&
		(node->parent->parent->right->right->n == node->n ||
		 node->parent->parent->right->left->n == node->n))
	{
		return (node->parent->parent->left);
	}
	if (node->parent->parent->left->n == node->parent->n &&
		(node->parent->parent->left->right->n == node->n ||
          node->parent->parent->left->left->n == node->n))
	{
	    return (node->parent->parent->right);
	}

	else
		return (NULL);
}
