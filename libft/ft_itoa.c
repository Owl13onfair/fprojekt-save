/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:44:54 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 16:55:01 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// funkt tested

char		*ft_itoa(int n);
static char	*ft_itoa2(int n, int long ln, char *retstr, int i_count);

char	*ft_itoa(int n)
{
	int			i_count;
	int 		posneg;
	int long	ln;
	char		*retstr;

	posneg = 0;
	i_count = 0;
	ln = n;
	printf("%ld\n",ln);
	if (ln < 0)
		ln = ln * -1;
	while(n < 0)
	{
		i_count++;
		n = n/10;
	}
	retstr = malloc(i_count+1);
	if(retstr == NULL)
		return(NULL);
	if (posneg == 1)
		retstr[i_count] = '-';
	if (n < 0)
		i_count++;
	return (ft_itoa2(n, ln, retstr, i_count));
}

static char	*ft_itoa2(int n, int long ln, char *retstr, int i_count)
{
	int long	inteater;

	inteater = 1000000000000;
	while (inteater > 0)
	{
		if ((ln / inteater) > 0 || ((n < 0 && i_count >= 2) || (n > 0
					&& i_count >= 1)))
			retstr[i_count] = (char)(ln / inteater) + 48;
		if ((ln / inteater) > 0 || ((n < 0 && i_count >= 2) || (n > 0
					&& i_count >= 1)))
			i_count++;
		ln = ln % inteater;
		inteater = inteater / 10;
	}
	if (i_count == 0)
		retstr[i_count] = (char)48;
	return (retstr);
}
