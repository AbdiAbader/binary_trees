#include "binary_trees.h"
/**
 *binary_tree_delete - deletes a tree
 *@tree: binary tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
while(1)
{
if (tree == NULL)
return;
else if (tree != NULL && tree->right != NULL)
{
binary_tree_delete(tree->right);
}
else if (tree != NULL && tree->left != NULL)
{
binary_tree_delete(tree->left);
}
else
{
free(tree);
}
}
}
