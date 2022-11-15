#include "binary_trees.h"
/**
 *binary_tree_delete - deletes a tree
 *@tree: binary tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
if (tree->left == NULL && tree->right == NULL)
{
free(tree);
}
}
