/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:31:27 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 17:15:14 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i_cont;

	ptr = NULL;
	i_cont = 0;
	while (s[i_cont] || c == s[i_cont])
	{
		if (s[i_cont] == c)
		{
			ptr = (char *)&s[i_cont];
			return(ptr);
		}
		i_cont++;
	}
	return (ptr);
}
