/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:50:20 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 13:52:57 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*v;
	unsigned char	*w;
	int				i;

	i = 0;
	v = (unsigned char*)dst;
	w = (unsigned char*)src;
	while (n > 0)
	{
		*v = *w;
		if ((unsigned char)c == *w)
			return (dst + i + 1);
		v++;
		w++;
		n--;
		i++;
	}
	return (NULL);
}
