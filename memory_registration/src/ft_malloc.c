/*
**	ft_malloc.c
*/

#include "../includes/memory_registration.h"

/*
** 1) Регистрация всей выделенной памяти и очистка в конце.
** 2) Передавать память которая уже не нужна и очищать ее или выделять на новые нужды!
** 3) Дефрагминтация 
*/
void		**REGISTER_MEMORY = NULL;

void	memory_registration(void *memory)
{
	static int16_t	index = 0;

	if ((REGISTER_MEMORY == NULL) || (index + 1 >= S_REG ))
		inicializace_registr();
	REGISTER_MEMORY[index] = memory;
	index++;
	REGISTER_MEMORY[index] = NULL;
}

void	*ft_malloc(size_t size)
{
	void *memory;

	S_REG = 512;
	memory = NULL;
	memory = (void *)malloc(size);
	memory_registration(memory);
	return (memory);
}