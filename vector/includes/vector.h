#ifndef VECTOR_H
# define VECTOR_H

# include <unistd.h>

/*
** create new vector
*/
void	*init_vector(ssize_t size);

/*
** free vector
*/
void	ft_vector_free(void *vector);


/*
** add items to the end
*/

void	ft_push_end(void *vector, size_t size);

/*
** add items to the start 
*/

void	ft_push_start(void *vector, size_t size);

#endif