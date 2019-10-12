#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
*
* @ht: hash table
*
* Return: no return
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list = NULL;
	hash_node_t *tmp = NULL;
	unsigned int j = 0;

	if (ht == NULL)
		return;

	for (j = 0; j < ht->size; j++)
	{
		list = ht->array[j];

		while (list != NULL)
		{
			free(list->key);
			free(list->value);
			tmp = list;
			list = list->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
