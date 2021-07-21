#include "binary_trees.h"

/**
* binary_tree_rotate_right - rotate to the right
* @tree: is a pointer to the root node of the tree to traverse
* Return: void
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *new;
if (tree == NULL)
return (NULL);
new = tree;
tree = tree->left;
if (tree->right != NULL)
{
new->left = tree->right;
tree->right->parent = new;
}
else
new->left = NULL;
new->parent = tree;
tree->right = new;
return (tree);
}
