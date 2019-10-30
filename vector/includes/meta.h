#ifndef META_H
# define META_H

# include <stdlib.h>
# include <unistd.h>
# define MEMORY_SIZE 10

typedef struct  s_meta
{
	size_t		a_size; //вся память 
	ssize_t		c_size; //сколько заполнено
	size_t		el_size; // размер элемента 
}				t_meta;

# define VEC_SIZE_META sizeof(t_meta)
# define META_BUFF(buff) (buff - VEC_SIZE_META())

void	ft_meta(void *vector, t_meta *info_meta);

#endif