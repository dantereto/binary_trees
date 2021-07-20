#include "binary_trees.h"

 /**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to data structure binary_tree_t
 * @value: integer with binary tree node value
 * Return: return binary tree node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);
size_t left_side = 0, right_side = 0;
left_side = binary_tree_nodes(tree->left);
right_side = binary_tree_nodes(tree->right);
return (left_side + right_side + 1);
return (0);
}