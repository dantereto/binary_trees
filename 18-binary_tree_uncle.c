#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: uncle of node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
  if (node == NULL || node->parent->parent == NULL || node->parent->parent->left == NULL || node-> \
    parent->parent->right == NULL)
  {
    return (NULL);
  }
 if (node->parent->left->n == node->n)
   {
     return (node->parent->parent->left);
   }
 else if (node->parent->right->n == node->n)
   {
     return (node->parent->parent->right);
   }
 return (0);
}
