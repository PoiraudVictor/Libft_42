/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:13:03 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 14:13:04 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*v;

	v = (char*)s;
	while (*v)
		v++;
	while (v >= s)
	{
		if (*v == (char)c)
			return (v);
		v--;
	}
	return (NULL);
}
