#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: integer (Balance factor)
 */


int binary_tree_balance(const binary_tree_t *tree)
{
int balance = 0;
int left_hight = 0;
int right_hight = 0;

if (tree->left != NULL)
{
	left_hight = binary_tree_height(tree->left) + 1;
}
if (tree->right != NULL)
{
	right_hight = binary_tree_height(tree->right) + 1;
}
balance = left_hight - right_hight;
return (balance);
}
