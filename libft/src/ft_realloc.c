/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oargrave <oargrave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 20:25:17 by oargrave          #+#    #+#             */
/*   Updated: 2019/10/29 07:19:22 by oargrave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *str, size_t prev, size_t size)
{
	void			*new;

	if (!str)
		return (NULL);
	if (!(new = ft_memalloc(size)))
	{
		free(str);
		return (NULL);
	}
	ft_memcpy(new, str, prev);
	free(str);
	return (new);
}
