/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipoirau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:20:20 by vipoirau          #+#    #+#             */
/*   Updated: 2019/01/29 20:20:43 by vipoirau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*tmp;
	t_list	*start;

	if (!lst || !f)
		return (NULL);
	tmp = lst;
	fresh = f(tmp);
	start = fresh;
	tmp = tmp->next;
	while (tmp)
	{
		fresh->next = f(tmp);
		fresh = fresh->next;
		tmp = tmp->next;
	}
	return (start);
}
