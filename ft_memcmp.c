/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:51:46 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 13:51:47 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*v;
	unsigned char	*w;
	size_t			i;

	v = (unsigned char*)(s1);
	w = (unsigned char*)(s2);
	i = 0;
	while (i++ < n)
	{
		if (*v != *w)
			return (*v - *w);
		v++;
		w++;
	}
	return (0);
}
