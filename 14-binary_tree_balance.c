#include "binary_trees.h"
/**
 * binary_tree_balance - perform and calculate balance
 * @tree: pointer to binary
 * Return: void
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int i = 0, j = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL)
i++;
if (tree->right != NULL)
j++;
i = i + binary_tree_balance(tree->left);
j = j + binary_tree_balance(tree->right);
return (i - j);
}
