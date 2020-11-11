/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:07:34 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 14:07:38 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*src;
	char	*dest;
	char	*v;

	src = (char*)malloc(ft_strlen(s1) + 1);
	if (src == NULL)
		return (NULL);
	dest = (char*)s1;
	v = src;
	while (*dest)
		*v++ = *dest++;
	*v = '\0';
	return (src);
}
