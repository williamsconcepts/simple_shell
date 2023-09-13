#include "shell.h"

/**
 * bfrees - frees a pointer and NULLs and the addresses,
 * @ptr: address of the pointer to frees
 *
 * Returns: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
