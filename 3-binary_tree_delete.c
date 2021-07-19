#include "binary_trees.h"

 /**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to data structure binary_tree_t
 * @value: integer with binary tree node value
 * Return: return binary tree node
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
}