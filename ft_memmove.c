/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:51:19 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 13:51:22 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*v;
	unsigned char		*w;
	unsigned long		i;

	v = (unsigned char*)dst;
	w = (unsigned char*)src;
	i = 0;
	if (v < w)
	{
		while (len > i)
		{
			v[i] = w[i];
			i++;
		}
	}
	else
	{
		while (len--)
			v[len] = w[len];
	}
	return (dst);
}
