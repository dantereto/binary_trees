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
		return (left_side + 1);
	}
	else
		return (right_side + 1);
}

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  is a pointer to the root node
 * Return: return 1 if perfect 0 if other
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height = 0;
int factor = 1;
int leaves = 0;
int i;

if (tree == NULL)
{
	return (0);
}
leaves = binary_tree_leaves(tree);
height = binary_tree_height(tree);

for (i = 0; i < height; i++)
{
	factor = factor * 2;
}

if (factor == leaves)
{
	return (1);
}
else
	return (0);
}
