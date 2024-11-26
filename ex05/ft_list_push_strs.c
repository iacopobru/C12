/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:26:52 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/25 23:58:39 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*elem;
	int		i;

	begin_list == NULL;
	i = 0;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		elem->next = begin_list;
		begin_list = elem;
		i++;
	}
	return (begin_list);
}
// #include <stdio.h>
// int main()
// {
// 	char *strs[3] = {"Hello", "World", "!"};
// 	t_list *arr = ft_list_push_strs(3, strs);
// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("%s\n", (char *)arr->data);
// 		arr = arr->next;
// 	}
// }