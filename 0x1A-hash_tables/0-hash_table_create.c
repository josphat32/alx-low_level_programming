#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array in the hash table
 * Return: A pointer to the hash table that was created.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL || size == 0)
		return (NULL);
	table->array = malloc(sizeof(void *) * size);
	if (table->array == NULL)
		return (NULL);
	table->size = size;

	array_null_init(table);
	return (table);
}

/**
 * array_null_init - Initializes array slots to NULL
 * @table: Pointer to a hash table struct
 */

void array_null_init(hash_table_t *table)
{
	unsigned long int i;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
}
