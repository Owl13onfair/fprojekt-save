/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:31:25 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 14:40:45 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t counter;
	void	*r;

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

int main (void)
{
	int charaker;
	size_t n = 20;

	void* k = malloc(n + 1);
	void* k2 = malloc(n + 1);
	charaker = 65;
	printf("\n%s", (char *)memset(k,charaker,n));
	printf("\n%s", (char *)ft_memset(k2,66,n));


}
