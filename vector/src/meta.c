#include "../includes/vector.h"

#include "memory_registration.h"

void	ft_meta(void *buff, t_meta *info_meta)
{
	void *vector;

	vector = buff - (sizeof(t_meta));
	*((size_t *)vector) = info_meta->a_size;
	*((size_t *)(vector + (sizeof(size_t)))) = info_meta->el_size;
	*((ssize_t *)(vector + (sizeof(size_t)) + (sizeof(ssize_t)))) = info_meta->c_size;
}