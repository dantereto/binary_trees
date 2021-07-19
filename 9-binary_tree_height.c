#include "binary_trees.h"

 /**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to data structure binary_tree_t
 * @value: integer with binary tree node value
 * Return: return binary tree node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);
size_t left_side = 0, right_side = 0;
left_side = binary_tree_height(tree->left);
right_side = binary_tree_height(tree->right);
if(left_side > right_side)
{
return (left_side) + 1;
}
else
return (right_side) + 1;
return (0);
}