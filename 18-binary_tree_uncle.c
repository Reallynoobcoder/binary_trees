#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a binary tree node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);

	if (node->parent->left == node)
		return (node->parent->right);

	return (NULL);
}

/**
 * binary_tree_uncle - Finds the uncle of a binary tree node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (binary_tree_sibling(node->parent) == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
