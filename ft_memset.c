/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:51:57 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 13:53:35 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*v;

	if (len == 0)
		return (b);
	v = (unsigned char *)b;
	while (len--)
	{
		*v = (unsigned char)c;
		if (len)
			v++;
	}
	return (b);
}
