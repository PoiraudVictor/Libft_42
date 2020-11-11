/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:14:06 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 14:12:35 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[i] != '\0' && len > i)
	{
		if (needle[0] == haystack[i])
		{
			j = 0;
			while (needle[j] == haystack[i + j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char*)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
