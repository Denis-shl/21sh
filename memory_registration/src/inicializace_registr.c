/*
** inicializace_registr.c
*/

#include "../includes/memory_registration.h"

extern void	**REGISTER_MEMORY;

static void	zero_memory(int16_t index, void **memory)
{
	while (index < S_REG)
	{
		memory[index] = NULL;
		index++;
	}
}

static void	copy_memory(void **new)
{
	int16_t		index;

	index = 0;
	while (REGISTER_MEMORY[index] != NULL)
	{
		new[index] = REGISTER_MEMORY[index];
		index++;
	}
	zero_memory(index, new);
	free(REGISTER_MEMORY);
	REGISTER_MEMORY = new;
}

void		inicializace_registr()
{
	int16_t		index;
	void		**new;

	index = 0;
	if (REGISTER_MEMORY == NULL)
	{
		REGISTER_MEMORY = (void **)malloc(sizeof(void *) * (S_REG + 1));
		zero_memory(index, REGISTER_MEMORY);
	}
	else 
	{
		S_REG *= 2;
		new = (void **)malloc(sizeof(void *) * (S_REG + 1));
		copy_memory(new);
	}
}
