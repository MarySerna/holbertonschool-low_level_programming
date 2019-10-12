#include "hash_tables.h"
/**
* hash_table_print - prints a hash table
*
* @ht: hash table
*
* Return: no return
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list = NULL;
	unsigned int j = 0;
	char *comma = "";

	if (ht == NULL)
		return;

	printf("{");

	for (j = 0; j < ht->size; j++)
	{
		list = ht->array[j];

		while (list != NULL)
		{
			printf("%s", comma);
			printf("'%s': '%s'", list->key, list->value);
			comma = ", ";
			list = list->next;
		}
	}
	printf("}\n");
}
