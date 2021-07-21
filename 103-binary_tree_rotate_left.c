#include "binary_trees.h"

/**
* binary_tree_rotate_left - rotate to the left
* @tree: is a pointer to the root node of the tree to traverse
* Return: void
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
if (tree == NULL)
return (NULL);
binary_tree_t *new;
new = tree;
tree = tree->right;
if (tree->left != NULL)
{
new->right = tree->left;
tree->left->parent = new;
}
else
new->right = NULL;
new->parent = tree;
tree->left = new;
return (tree);
}
