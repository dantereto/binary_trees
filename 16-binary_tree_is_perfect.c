#include "binary_trees.h"

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
