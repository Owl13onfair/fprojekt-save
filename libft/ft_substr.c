/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:27:36 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 11:23:20 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i_cont;
	int		i_cont2;
	char	*retstr;

	retstr = malloc(len);
	if (retstr == NULL)
		return (NULL);
	i_cont = 0;
	i_cont = 0;
	while (s[i_cont])
	{
		if (s[i_cont] == (char)start)
		{
			while (s[i_cont])
			{
				retstr[i_cont2] = s[i_cont2 + i_cont];
				i_cont2++;
			}
		}
		i_cont++;
	}
	return (retstr);
}
