#include "binary_trees.h"
/**
 * binary_tree_sibling - check for siblings
 * @node: binary tree node
 * Return: return NUll or sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
return (node == node->parent->left ? node->parent->right : node->parent->left);
}
