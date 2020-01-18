#include "hash_tables.h"
/**
* *hash_table_create - creates a hash table
* @size: size of array
* Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nw_table = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	nw_table = malloc(sizeof(hash_table_t));

	if (nw_table == NULL)
		return (NULL);

	nw_table->size = size;
	nw_table->array = malloc(sizeof(hash_node_t *) * size);

	if (nw_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		nw_table->array[i] = NULL;

	return (nw_table);
}
