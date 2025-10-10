/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:21:53 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 15:29:54 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>



int mancptest(void);
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t counter;
	void	*r;

	r = dest;
	counter = 0;
	while(counter < n)
	{
		*(char *) dest = *(char *) src;
		dest++;
		src++;
		counter ++;
	}
	return(r);
}



int main (void)
{
	mancptest;
	size_t n = 2;
	char *test = {"012345"};
	void *dest = malloc(20);
	void *src = test + 4;


		printf("%p" , ft_memcpy( dest,  src, n) );
		printf("\n %s" , (char *)dest);
}


int mancptest(void)
{
	int *a;
	int *b;
	int *c;
	int *d;

	a = malloc(32);
	b = malloc(20);
	c = malloc(32);
	d = malloc(20);
	if(a == NULL || b == NULL || c == NULL || d == NULL)
	{
		printf("mallokerror");
		return(0);
	}
	a[0] = 33;
	a[1] = 2;
	a[2] = 4;
	a[3] = 5788;
	a[4] = 378;
	c[0] = 33;
	c[1] = 2;
	c[2] = 4;
	c[3] = 5877;
	c[4] = 378;
	memcpy(d,c,8);
	ft_memcpy(b,a,8);
	printf("%d, %d, %d, %d" , b[0] - d[0], b[1] - d[1], b[2] - d[2], b[3] - d[3], b[4] - d[4]);
	free(a);
	free(b);
	free(c);
	free(d);
}