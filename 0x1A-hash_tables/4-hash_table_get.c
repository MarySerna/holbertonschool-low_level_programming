#include "hash_tables.h"
/**
* *hash_table_get - retrieves a value associated with a key
* @ht: hash table you want to look into
* @key: key you are looking for
* Return: value associated with the element, or NULL if key couldnt be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *lt = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	lt = ht->array[index];

	while (lt != NULL)
	{
		if (strcmp(key, lt->key) == 0)
		{
			return (lt->value);
		}
		lt = lt->next;
	}
	return (NULL);
}
