/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:49:31 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 13:49:33 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*v;
	size_t	i;

	i = 0;
	v = malloc(size);
	if (v == NULL)
		return (NULL);
	ft_bzero(v, size);
	return (v);
}
