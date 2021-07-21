#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree:  is a pointer to the root node
* Return: return binary tree node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_side = 0, right_side = 0;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);
left_side = binary_tree_height(tree->left);
right_side = binary_tree_height(tree->right);
if (left_side > right_side)
{
return (left_side) + 1;
}
else
return (right_side) + 1;
}
