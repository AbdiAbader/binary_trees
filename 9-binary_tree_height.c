#include "binary_trees.h"
/**
 * binary_tree_height - perform inorder traversal
 * @tree: pointer to binary
 * Return: void
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t i = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL)
i++;
if (tree->right != NULL)
i++;
binary_tree_height(tree->left);
binary_tree_height(tree->right);
return (i);
}
