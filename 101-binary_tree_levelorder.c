#include "binary_trees.h"

/**
* printGivenLevel - print by the level
* @root:  is a pointer to the root node
* @level: the level of the tree
* @func: call the function to print
* Return: return binary tree node
*/
void printGivenLevel(const binary_tree_t *root, int level, void (*func)(int))
{
if (root == NULL)
return;
if (level == 1)
func(root->n);
else if (level > 1)
{
printGivenLevel(root->left, level - 1, func);
printGivenLevel(root->right, level - 1, func);
}
}
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
return (left_side + 1);
}
else
return (right_side + 1);
}

/**
* binary_tree_levelorder - goes through level-order traversal
* @tree: is a pointer to the root node of the tree to measure the size
* @func: is a pointer to a function to call for each node.
* Return: binary tree size (size_t)
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
int h = binary_tree_height(tree) + 1;
int i = 1;
for (i = 1; i <= h; i++)
{
printGivenLevel(tree, i, func);
}
}
}
