#ifndef META_H
# define META_H

# include <stdlib.h>
# include <unistd.h>


typedef struct 
{
	size_t		a_size; 
	ssize_t		c_size;
	size_t		e_size;
}				t_meta;

# define VEC_SIZE_META sizeof(t_meta)
# define META_BUFF(buff) (buff - VEC_SIZE_META()) 

#endif