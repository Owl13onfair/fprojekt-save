/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:14:44 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 16:00:36 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	cont_little;
	size_t	cont_big;
	char	*ptr;

	cont_big = 0;
	if(little[0] == 0)
		return((char*)big);
	while (big[cont_big] && !(len == cont_big))
	{
		cont_little = 0;
		while ((big[cont_big + cont_little] == little[cont_little])
			&& cont_little + cont_big <= len)
		{
			cont_little++;
			if (!(little[cont_little]))
			{
				ptr = (char *)big + cont_big;
				return (ptr);
			}
		}
		cont_big++;
	}
	return (NULL);
}

int main(void)
{
	printf("%s\n" , ft_strnstr("loaklinjkiiops", "klinjki" , 15));
	printf("%s\n" , ft_strnstr("loaklinjkiiops", "klinjki" , 14));
	printf("%s\n" , ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("%s\n" , ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	return 0;
}

