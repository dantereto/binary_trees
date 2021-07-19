#include "binary_trees.h"

 /**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to data structure binary_tree_t
 * @value: integer with binary tree node value
 * Return: return binary tree node
 */

 binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
  /* guard condtion */
  binary_tree_t *new;
  if (parent == NULL)
    {
      return (NULL);
    }
  new = binary_tree_node(parent, value);
  if (parent->right != NULL)
    {
      parent->right->parent = new;
      new->right = parent->right;
      parent->right = new;
    }
  else
    {
      parent->right = new;
    }
  return (new);
}
