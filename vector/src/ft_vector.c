/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oargrave <oargrave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:01:41 by oargrave          #+#    #+#             */
/*   Updated: 2019/10/30 08:18:11 by oargrave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"

#include "memory_registration.h"


void	*init_vector(size_t el_size, size_t count)
{
	t_meta	info_meta;
	void	*buff;
	size_t	size;

	size = el_size * count;
	buff = ft_malloc(size + (sizeof(info_meta)));
	if (buff == NULL)
	{
		ft_del_memory();
		return (NULL);
	}
	info_meta.a_size = size;
	info_meta.c_size = -1;
	info_meta.el_size = el_size;
	buff += (sizeof(info_meta));
	ft_meta(buff, &info_meta);
	return (buff);
}
