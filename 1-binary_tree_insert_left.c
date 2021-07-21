#include "binary_trees.h"

/**
* binary_tree_insert_left -  inserts a node as the left-child of another node
* @parent: pointer to data structure binary_tree_t
* @value: integer with binary tree node value
* Return: return binary tree node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (parent == NULL)
{
return (NULL);
}
new = binary_tree_node(parent, value);
if (parent->left != NULL)
{
parent->left->parent = new;
new->left = parent->left;
}
parent->left = new;
return (new);
}
