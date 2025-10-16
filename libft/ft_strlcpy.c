/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:45:07 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 22:04:27 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


size_t	ft_strlcpy(char *dst , const char *src, int size)
{
	size_t i_conter;
	int i;
	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i_conter++;
		i++;
	}
	if(i>0 || src[0]==0)
		dst[i] = '\0';
	i_conter = 0;
	while (src[i_conter])
		i_conter++;
	return(i_conter);
}

// int main (void)
// {
// char *test1m;
// test1m = malloc(28);
// char *test1o;
// test1o = malloc(28);
// char *test2m;
// test2m = "wow";
// char *test2o;
// test2o = "lorem ipsum dolor sit amet";

// printf("%ld",ft_strlcpy(test1m, test2m, 0));
// printf("a\n\n");
// printf("%ld",ft_strlcpy(test1o, test2o, 0));
// printf("%s\n",test1m);
// printf("%s\n",test1o);
// free(test1m);
// free(test1o);
// }
