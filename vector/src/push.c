#include "../includes/vector.h"
#include "memory_registration.h"


void	ountput_meta(t_meta *meta_info, void *buff)
{
	void *vector;

	vector = buff - (sizeof(t_meta));
	meta_info->a_size = *((size_t *)vector);
	meta_info->el_size = *((size_t *)(vector + (sizeof(size_t))));
	meta_info->c_size = *((ssize_t *)(vector + ((sizeof(size_t)) + (sizeof(ssize_t)))));
}

static void	ft_memcpy(void *buff, void *data, size_t size)
{
	size_t	index;
	char	*p_buff;
	char	*p_data;

	p_buff = (char *)buff;
	p_data = (char *)data;
	index = 0;
	while (index != size)
	{
		*p_buff = *p_data;
		p_buff++;
		p_data++;
		index++;
	}
}

void		*ft_create_new_memory(void *buff, t_meta *meta_info)
{
	void	*new_buff;
	
	new_buff = ft_malloc(sizeof(t_meta) + (meta_info->a_size + MEMORY_SIZE));
	ft_memcpy((new_buff + sizeof(t_meta)), buff, (meta_info->a_size * meta_info->el_size));
	ft_free(buff);
	return (new_buff);
}

void	ft_push(void *buff, void *data)
{
	t_meta	meta_info;

	ountput_meta(&meta_info, buff);
	meta_info.c_size += 1;
	if (meta_info.a_size <= meta_info.c_size)
	{
		buff = ft_create_new_memory(buff, &meta_info);
		meta_info.a_size += MEMORY_SIZE;
	}
	ft_memcpy(buff + (meta_info.c_size * meta_info.el_size), data, meta_info.el_size);
	ft_meta(buff, &meta_info);
}