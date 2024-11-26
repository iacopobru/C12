/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:14:38 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/25 23:26:13 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;

	if (!begin_list)
		return ;
	if (!(*begin_list))
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	temp = *begin_list;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ft_create_elem(data);
}
