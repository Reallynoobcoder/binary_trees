#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: 0 if the node is the root or if the tree is empty.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depht;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	depht = binary_tree_depth(tree->parent) + 1;

	return (depht);
}
