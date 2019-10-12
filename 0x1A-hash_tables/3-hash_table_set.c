#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: The hash table to add or update
 * @key: Is the key of the function
 * @value: The value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL, *list = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	list = ht->array[index];

	while (list)
	{
		if (strcmp(key, list->key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			if (list->value == NULL)
				return (0);
			return (1);
		}
		list = list->next;
	}
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}
	element->value = strdup(value);
	if (element->value == NULL)
	{
		free(element->key);
		free(element);
		return (0);
	}
	element->next = ht->array[index];
	ht->array[index] = element;
	return (1);
}

