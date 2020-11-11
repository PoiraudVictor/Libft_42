/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:45:25 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/30 13:45:28 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **link, void (*del)(void *, size_t))
{
	t_list	*next;

	while (*link != NULL)
	{
		next = (*link)->next;
		ft_lstdelone(link, del);
		*link = next;
	}
}
