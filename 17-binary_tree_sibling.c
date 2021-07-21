#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: node of sibiling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p = node->parent;
	binary_tree_t *p_left = node->parent->left;
	binary_tree_t *p_right = node->parent->right;

if (node == NULL || p == NULL || p_left == NULL || p_right == NULL)
return (NULL);
if (node->parent->left->n == node->n)
return (node->parent->right);
else if (node->parent->right->n == node->n)
return (node->parent->left);
return (0);
}
