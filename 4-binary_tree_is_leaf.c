#include "binary_trees.h"
/**
 * binary_tree_is_leaf - counts leaf
 * @node: nodes conunt
 * Return: number of leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node->left == NULL && node->right == NULL)
return (1);
else
return (0);
}
