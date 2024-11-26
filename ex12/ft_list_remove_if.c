/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 01:30:23 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/26 02:03:55 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	rm_first_elem(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*temp;

	while (*begin_list != NULL && cmp((*begin_list)->data, data_ref) == 0)
	{
		temp = (*begin_list)->next;
		free_fct((*begin_list)->data);
		free(*begin_list);
		(*begin_list) = temp;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*dest;

	rm_first_elem(begin_list, data_ref, cmp, free_fct);
	dest = *begin_list;
	temp = *begin_list;
	while (dest != NULL)
	{
		if (cmp(dest->data, data_ref) == 0)
		{
			temp->next = dest->next;
			free_fct(dest->data);
			free(dest);
			dest = temp->next;
		}
		else
		{
			temp = dest;
			dest = dest->next;
		}
	}
}
