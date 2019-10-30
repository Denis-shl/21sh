#ifndef VECTOR_H
# define VECTOR_H

# include <unistd.h>
# include "meta.h"
/*
** create new vector
*/
void	*init_vector(size_t el_size, size_t count);

/*
** free vector
*/
void	ft_vector_free(void *vector);


/*
** add items to the end
*/

void	ft_push(void *buff, void *data);

/*
** add items to the start 
*/

void	ft_push_start(void *vector, size_t size);

#endif