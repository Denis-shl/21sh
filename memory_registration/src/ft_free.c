/*
** ft_free.c
*/

#include "../includes/memory_registration.h"

extern void		**REGISTER_MEMORY;

void	ft_free(void *memory)
{
	int16_t		index;

	index = 0;
	while (REGISTER_MEMORY[index] && memory != REGISTER_MEMORY[index])
	{
		index++;
	}
	if (memory == REGISTER_MEMORY[index])
	{
		free(REGISTER_MEMORY[index]);
		REGISTER_MEMORY[index] = NULL;
	}
}
