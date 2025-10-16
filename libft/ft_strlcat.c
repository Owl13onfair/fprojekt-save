/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:10:15 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 22:12:13 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size);
static void	testerfunk(char *y, char *x, size_t z);

int	main(void)
{
	printf("START");
	char * k = malloc(20);
	k[0] = 'a';
	k[1] = 'a';
	k[2] = 'a';
	k[3] = 0;
	testerfunk(k, "lorem ipsum dolor sit amet", (size_t)0);
	// testerfunk("yjsbam", "ka jen ", (size_t)2);
	// testerfunk("ollope", "kimm", (size_t)4);
	// testerfunk("klikklak", "uioa78", (size_t)6);
	// testerfunk("ianihliv", "oppas", (size_t)2);
	// testerfunk("kissing", "782HJKBYGIFYHKCG", (size_t)1);
	// testerfunk("90019", "\n", (size_t)2);
	// testerfunk("9087561", "00817", (size_t)4);
}

static void	testerfunk(char *y, char *x, size_t z)
{
	char	*y2;
	char	*x2;

	y2 = y;
	x2 = x;

	printf("set\n");
	printf("%ld\n",ft_strlcat(y2, x2, z));
	// printf("%ld",ft_strlcat(y3, x3, z));
	printf("%s\n",x);
	printf("%s\n",y);


}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(dst[i] != '\0')
		i++;
	while(i < (size - 1) && src[j] )
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if(i < size)
		dst[i] = '\0';
	while(src[j])
	{
		i++;
		j++;
	}
	if((i-j) > size)
		i = size + j;
	return(i);
}



