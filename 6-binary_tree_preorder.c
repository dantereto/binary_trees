#include "binary_trees.h"

 /**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to data structure binary_tree_t
 * @value: integer with binary tree node value
 * Return: return binary tree node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}