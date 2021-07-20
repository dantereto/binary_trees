#include "binary_trees.h"

 /**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to data structure binary_tree_t
 * @value: integer with binary tree node value
 * Return: return binary tree node
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