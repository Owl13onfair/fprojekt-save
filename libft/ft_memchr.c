/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:48:59 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 18:23:18 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>

void *memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	int		i_cont;
	char curent;
	char *temp;
	i_cont = 0;
	curent = s;
	while(curent && i_cont <= n)
	{
		s++;
		curent = s;
		if (curent == c)
		{

			return (s);
		}
		i_cont++;
	}
	return (NULL);
}


int main (void)
{



}