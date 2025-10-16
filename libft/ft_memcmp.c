/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:05:14 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 18:38:56 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	memcmp(const void *s1, const void *s2, size_t n);

int	memcmp(const void *s1, const void *s2, size_t n)
{
	int		i_position;
	char	*c_mem1;
	char	*c_mem2;

	i_position = 0;
	c_mem1 = (char *)s1;
	c_mem2 = (char *)s2;
	while ((size_t)i_position <= n
		&& ((char)c_mem2[i_position] == (char)c_mem1[i_position]))
	{
		if (!((char)c_mem2[i_position] == (char)c_mem1[i_position]))
		{
			return ((int)c_mem2[i_position] - (int)c_mem1[i_position]);
		}
		i_position++;
	}
	return (0);
}

// int main()
// {
// char *k;
// char *l;

// k = "ichduer2";
// l = "ichduer4";
// printf("%d",memcmp(k,l,8));
// }