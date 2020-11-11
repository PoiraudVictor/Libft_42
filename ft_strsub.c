/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:13:31 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 14:13:34 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*new;

	if (!s)
		return (NULL);
	if (!(new = ft_strnew(len)))
		return (NULL);
	else
		while (start--)
			s++;
	ft_strncpy(new, s, len);
	new[len] = '\0';
	return (new);
}
