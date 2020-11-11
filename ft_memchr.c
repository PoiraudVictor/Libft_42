/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:50:32 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 13:50:35 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*v;
	size_t			i;

	v = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (v[i] == (unsigned char)c)
			return ((unsigned char*)v + i);
		i++;
	}
	return (NULL);
}
