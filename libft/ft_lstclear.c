/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:54:15 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/15 20:08:58 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *));
static void	ft_lstclear2(t_list **lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	if (lst[0] != NULL)
		ft_lstclear2(lst[0]->next, del);
	del(lst[0]->content);
	free(lst[0]);
	lst = NULL;
	return ;
}

static void	ft_lstclear2(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	if (lst[0] != NULL)
		ft_lstclear2(lst[0]->next, del);
	del(lst[0]->content);
	free(lst[0]);
	return ;
}
