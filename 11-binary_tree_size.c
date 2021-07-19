#include "binary_trees.h"

 /**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to data structure binary_tree_t
 * @value: integer with binary tree node value
 * Return: return binary tree node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree != NULL)
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
else
return (0);
}