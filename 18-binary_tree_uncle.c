#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: The pointer to the uncle node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
