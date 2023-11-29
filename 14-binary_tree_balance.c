#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Description:
 * This function recursively measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the tree
 * 0 if the tree is empty, or 1 if it only has the root.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_r, height_l;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	height_r = binary_tree_height(tree->right) + 1;
	height_l = binary_tree_height(tree->left) + 1;

	if (height_l > height_r)
		return (height_l);
	return (height_r);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the binary tree. If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	return (left - right);
}
