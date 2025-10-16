/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:07:38 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/14 14:26:10 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*retptsd;

	retptsd = malloc(nmemb * size);
	if (retptsd == NULL)
		return (NULL);
	ft_bzero(retptsd, size * nmemb);
	return (retptsd);
}

// void ft_bzero(void *s,  size_t n)
// {
// 	size_t counter;
// 	// void	*r;S
// 	// r = s;
// 	counter = 0;
// 	while(counter < n)
// 	{
// 		*(char *) s = '/0';
// 		s++;
// 		counter ++;
// 	}
// 	// return(r);
// }
