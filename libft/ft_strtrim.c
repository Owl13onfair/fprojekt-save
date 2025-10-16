/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:11:11 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/14 12:24:35 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set);
static char	*ftt_strtrim(char const *s1, char const *set, char *str);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		cont1;
	int		cont2;
	int		cont3;
	char	*retstr;

	cont3 = 0;
	cont1 = 0;
	while (s1[cont1])
	{
		cont2 = 0;
		while (set[cont2] && cont2 > 0)
		{
			if (s1[cont1] == set[cont2])
				cont2 = -1;
		}
		if (cont2 > 0)
			cont3++;
		cont1++;
	}
	retstr = malloc(cont3 + 1);
	if (retstr == NULL)
		return (NULL);
	return (ftt_strtrim(s1, set, retstr));
}

static char	*ftt_strtrim(char const *s1, char const *set, char *str)
{
	int	cont1;
	int	cont2;
	int	cont3;

	cont3 = 0;
	cont1 = 0;
	while (s1[cont1])
	{
		cont2 = 0;
		while (set[cont2] && cont2 > 0)
		{
			if (s1[cont1] == set[cont2])
				cont2 = -1;
		}
		if (cont2 > 0)
		{
			str[cont3] = s1[cont1];
			cont3++;
		}
		cont1++;
	}
	str[cont3] = '\0';
	return (str);
}
