/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:19:59 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/15 20:09:45 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*oldcurent;
	t_list	*newcurent;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new = malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return (NULL);
	oldcurent = lst;
	newcurent = new;
	while (oldcurent != NULL)
	{
		newcurent = malloc(sizeof(t_list) * 1);
		if (newcurent == NULL)
		{
			ft_lstclear(new, del);
			return (NULL);
		}
		newcurent->content = f(oldcurent->content);
		oldcurent = oldcurent->next;
		newcurent = newcurent->next;
	}
	return (new);
}
