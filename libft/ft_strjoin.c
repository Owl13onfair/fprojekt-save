/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:57:17 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/14 12:24:11 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i_sice1;
	int		i_sice2;
	char	*retstr;

	i_sice1 = 0;
	i_sice2 = 0;
	while (s1[i_sice1])
		i_sice1++;
	while (s2[i_sice2])
		i_sice2++;
	retstr = malloc(i_sice2 + i_sice1 + 1);
	if (retstr == NULL)
		return (NULL);
	i_sice1 = -1;
	i_sice2 = -1;
	while (s1[++i_sice1])
		retstr[i_sice1] = s1[i_sice1];
	while (s2[++i_sice2])
		retstr[i_sice1 + i_sice2 - 1] = s2[i_sice2];
	retstr[i_sice1 + i_sice2] = '\0';
	return (retstr);
}
