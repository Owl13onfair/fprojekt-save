/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:46:48 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 17:19:52 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int memmovetester2(void);
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
	counter = 0;
	while(counter < n)
	{
		dest++;
		src++;
		counter ++;
	}
	dest--;
	src--;
	counter = 0;
	while(counter < n)
	{
		*(char *) dest = *(char *) src;
		dest--;
		src--;
		counter++;
	}
	return(r);
}


int main (void)
{
	printf("start");
	memmovetester();
	memmovetester2();
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


memmove(&or_b[2], &or_b[1], 3);
ft_memmove(&ft_b[2], &ft_b[1], 3);
memmove(&or_a[0], &or_a[1], 2);
ft_memmove(&ft_a[0], &ft_a[1], 2);


// void *ft_memmove(void *dest, const void *src, size_t n)

int i;
i = 0;
printf(" \n b0" );
while(i < 6)
{
	if(or_b[i] != ft_b[i]) // USE || 1 FOR DEBUG
	printf("\n bl%d , o%d , s%d ", i , or_b[i] , ft_b[i]  );
	else
	printf(" \nOK");
	i++;
}
i = 0;
printf(" \n a0" );
while(i < 6)
{
	if(or_a[i] != ft_a[i])
	printf(" \n al%d , o%d  , s%d " , i , or_a[i] ,ft_a[i] );
	else
	printf(" \nOK");
	i++;
}

return(0);
}


int memmovetester2(void)
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


memmove(&or_b[4], &or_b[0], 3);
ft_memmove(&ft_b[4], &ft_b[0], 3);
memmove(&or_a[1], &or_a[3], 5);
ft_memmove(&ft_a[1], &ft_a[3], 5);


// void *ft_memmove(void *dest, const void *src, size_t n)

int i;
i = 0;
printf(" \n b0" );
while(i < 6)
{
	if(or_b[i] != ft_b[i]) // USE || 1 FOR DEBUG
	printf("\n bl%d , o%d , s%d ", i , or_b[i] , ft_b[i]  );
	else
	printf(" \nOK");
	i++;
}
i = 0;
printf(" \n a0" );
while(i < 6)
{
	if(or_a[i] != ft_a[i])
	printf(" \n al%d , o%d  , s%d " , i , or_a[i] ,ft_a[i] );
	else
	printf(" \nOK");
	i++;
}

return(0);
}