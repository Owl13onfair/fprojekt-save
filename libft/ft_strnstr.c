/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:14:44 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 19:31:29 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t cont_little;
	size_t cont_big;
	char *ptr;

	cont_big = 0;
	while (big[cont_big] && !(len == cont_big))
	{
		cont_little = 0;
		while ((big[cont_big + cont_little] == little[cont_little])&& cont_little + cont_big <= len)
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
	char testl[8] = "klinjki";
	char testb[15] = "loaklinjkiiops";
	char testl2[8] = "klinjki";
	char testb2[15] = "loaklinjkiiops";
	printf("%s\n" , ft_strnstr(testb, testl , 11));
	printf("%s" , strnstr(testb2, testl2 , 6));
}
