/*
** ft_del_memory.c
*/

#include "../includes/memory_registration.h"

extern void		**REGISTER_MEMORY;

void	ft_del_memory(void)
{
	int16_t		index;

	index = 0;
	while (REGISTER_MEMORY && index < S_REG)
	{
		free(REGISTER_MEMORY[index]);
		index++;
	}
	free(REGISTER_MEMORY);
	REGISTER_MEMORY = NULL;
}
