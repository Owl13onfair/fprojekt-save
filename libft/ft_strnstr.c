/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:14:44 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 12:07:56 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t cont_little;
	size_t cont_big;
	char *ptr;

	cont_big = 0;
	while (big[cont_big])
	{
		cont_little = 0;
		while (big[cont_big + cont_little] == little[cont_little])
		{
			cont_little++;
			if (!(little[cont_little]) || len == cont_litel)
			{
				ptr = (char *)big + cont_big;
				return (ptr);
			}
		}
	}

	return (NULL);
}
