/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:14:47 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/26 01:14:21 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*now_elem;
	t_list	*prev_elem;
	t_list	*next_elem;

	if (!begin_list)
		return ;
	prev_elem = NULL;
	now_elem = *begin_list;
	while (now_elem != NULL)
	{
		next_elem = now_elem->next;
		now_elem->next = prev_elem;
		prev_elem = now_elem;
		now_elem = next_elem;
	}
	*begin_list = prev_elem;
}

// #include <stdio.h>
// int main()
// {
// 	t_list uno;
// 	t_list due;
// 	t_list tre;
// 	uno.data = "sono uno";
// 	uno.next = &due;
// 	due.data = "sono due";
// 	due.next = &tre;
// 	tre.data = "sono tre";
// 	tre.next = NULL;

// 	t_list *arr = &uno;
// 	ft_list_reverse(&arr);
// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("%s\n", (char *)arr->data);
// 		arr = arr->next;
// 	}
// }