# ifndef MEMORY_REGISTRATION_H
# define MEMORY_REGISTRATION_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
int16_t		S_REG;

void	*ft_malloc(size_t size);
void	inicializace_registr();

/*
** control
*/

/*
** clear all memory
*/
void	ft_del_memory();

/*
**  clear a specific memory location
*/

void	ft_free(void *memory);
#endif