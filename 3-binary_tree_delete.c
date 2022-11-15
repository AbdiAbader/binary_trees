#include "binary_trees.h"
/**
 *binary_tree_delete - deletes a tree
 *@tree: binary tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
binary_tree_t *left, *right;
if (tree == NULL)
return;
if (tree->left == NULL && tree->right == NULL)
{
free(tree);
}
}
