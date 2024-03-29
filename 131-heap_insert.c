#include "binary_trees.h"

heap_t *heap_insert(heap_t **root, int value);
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * heap_insert- Inserts a value in Max Binary Heap.
 *
 * @root: A double pointer to the root node of the Heap to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *tree, *new, *flip;
	int size, leaves, sub, bit, level, tmp;

	if (!root)
		return (NULL);
	if (!(*root))
		return (*root = binary_tree_node(NULL, value));

	tree = *root;
	size = binary_tree_size(tree);
	leaves = size;

	for (level = 0, sub = 1; leaves >= sub; sub *= 2, level++)

