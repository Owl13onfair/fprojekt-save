/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:46:48 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 15:51:19 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int memmovetester(void);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memcpy_rev(void *dest, const void *src, size_t n);

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if(dest < src)
	{
	return(ft_memcpy(dest, src, n));
	}
	if(dest > src)
	{
	return(ft_memcpy_rev(dest, src, n));
	}
	return(dest);
}


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

void *ft_memcpy_rev(void *dest, const void *src, size_t n)
{
	size_t counter;
	void	*r;

	r = dest;
	counter = n -1;
	while(counter > 0)
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
	memmovetester();
	char* test_ft1 = "0123456789";
	// char* test_1 = "0123456789";
	// char* test_ft2 = "0123456789";
	// char* test_2 = "0123456789";

	memmove(test_ft1 + 0 , test_ft1 + 1, 2);
	// testcase by maximilian
	// printf("tast_1");
	// if(memmove(test_ft1 + 0 , test_ft1 + 1, 2) == memmove(test_1 + 0 , test_1 + 1, 2))
	// {
	// 	printf("sucsess");
	// }
	// else
	// {
	// 	printf("orginal%s",test_1);
	printf("yourversion , %s",test_ft1);
	// }
	// printf("tast_2");
	// if(memmove(test_ft2 + 1 , test_ft2 + 0, 2) == memmove(test_2 + 1 , test_2 + 0, 2))
	// {
	// 	printf("sucsess");
	// }
	// 	else
	// {
	// 	printf("orginal%s",test_2);
	// 	printf("yourversion%s",test_ft2);
	// }



}


int memmovetester(void)
{
__int8_t* ft_a;
__int8_t* or_a;
__int8_t* ft_b;
__int8_t* or_b;
// __int8_t* c;
// __int8_t* d;
ft_a = malloc(7);
ft_a[0] = 0;
ft_a[1] = 1;
ft_a[2] = 2;
ft_a[3] = 3;
ft_a[4] = 4;
ft_a[5] = 5;
// or
or_a = malloc(7);
or_a[0] = 0;
or_a[1] = 1;
or_a[2] = 2;
or_a[3] = 3;
or_a[4] = 4;
or_a[5] = 5;
// b
	ft_b = malloc(7);
	ft_b[0] = 0;
	ft_b[1] = 1;
	ft_b[2] = 2;
	ft_b[3] = 3;
	ft_b[4] = 4;
	ft_b[5] = 5;
	// or
	or_b = malloc(7);
	or_b[0] = 0;
	or_b[1] = 1;
	or_b[2] = 2;
	or_b[3] = 3;
	or_b[4] = 4;
	or_b[5] = 5;

memmove(or_a[0], or_a[1], 2);
ft_memmove(ft_a[0], ft_a[1], 2);
memmove(or_b[2], or_b[1], 3);
ft_memmove(ft_a[2], ft_a[1], 3);



return(0);
}