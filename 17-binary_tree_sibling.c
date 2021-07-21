#include "binary_trees.h"

 /**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to data structure binary_tree_t
 * @value: integer with binary tree node value
 * Return: return binary tree node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->left == NULL || node->parent->right == NULL)
return (NULL);
if (node->parent->left->n == node->n)
return (node->parent->right);
else if (node->parent->right->n == node->n)
return (node->parent->left);
return (0);
}