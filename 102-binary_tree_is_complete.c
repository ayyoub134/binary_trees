#include "binary_trees.h"

int binary_tree_is_complete(const binary_tree_t *tree);
levelorder_queue_t *create_node(binary_tree_t *node);
void free_queue(levelorder_queue_t *head);
void push(binary_tree_t *node, levelorder_queue_t *head,
		levelorder_queue_t **tail);
void pop(levelorder_queue_t **head);

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{

	levelorder_queue_t *head, *tail;
	unsigned char flag = 0;

	if (tree == NULL)
		return (0);

	head = tail = create_node((binary_tree_t *)tree);
	if (head == NULL)
		exit(1);

	while (head != NULL)
	{
		if (head->node->left != NULL)
		{
			if (flag == 1)
			{

