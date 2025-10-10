/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:40:33 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 11:07:07 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i_cont;

	i_cont = 0;
	while (s[i_cont])
	{
		if (s[i_cont] == c)
		{
			ptr = (char *)s + i_cont;
			return (ptr);
		}
		i_cont++;
	}
	return (NULL);
}

int	main(void)
{
	char *str = "iugiuyahsvibuyijan[opwjkmlubavuouwib]";
	printf("%p , %p", strchr(str, 121), ft_strchr(str, 121));
}