/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:10:22 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 14:46:20 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_bzero(void *s,  size_t n)
{
	int c;
	size_t counter;
	void	*r;

	c = 0;
	r = s;
	counter = 0;
	while(counter < n)
	{
		*(char *) s = (char) c;
		s++;
		counter ++;
	}
	return(r);
}

// nead a tester funtion for this