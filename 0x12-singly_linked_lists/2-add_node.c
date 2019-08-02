#include "lists.h"
/**
 * add_node - adds a node at the end of a list
 * @head: pointer to the start of the list
 * @str: string to be copied inside the new node
 * Return: pointer to the new node
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(const char *s)
{
int i;
int len;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
return (i);
}
