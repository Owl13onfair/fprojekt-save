/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:29:07 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/14 12:24:08 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	int		i_cont;
	char	*retstr;

	i_cont = 0;
	while (s[i_cont])
		i_cont++;
	retstr = malloc(i_cont + 1);
	if (retstr == NULL)
		return (NULL);
	i_cont = 0;
	while (s[i_cont])
	{
		retstr[i_cont] = s[i_cont];
		i_cont++;
	}
	retstr[i_cont] = '\n';
	return (retstr);
}
