/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:48:59 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 17:00:32 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	void	*temp;
	size_t	i_cont;

	temp = (void *)s;
	ptr = (char *)s;
	i_cont = 0;
	while (ptr[0] && i_cont < n)
	{
		if (ptr[i_cont] == c)
		{
			return ((void *)temp);
		}
		i_cont++;
		temp++;
	}
	return (NULL);
}
