/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:51:29 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 10:33:26 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int			i;
	int long	b;
	int			c;

	c = 1;
	b = 0;
	i = -1;
	while (nptr[++i])
	{
		if (!(((b == 0 && (c != -1 || i == 0)) && ((nptr[i] == '-'
							|| nptr[i] == '+') || (((nptr[i] >= 9
									|| nptr[i] <= 13) || nptr[i] == ' '))))
				|| ('0' <= nptr[i] && '9' >= nptr[i])))
		{
			c = c * (int)b;
			return (c);
		}
		if ('0' <= nptr[i] && '9' >= nptr[i])
		{
			b = (long)b * 10;
			b = b + (long)(nptr[i] - '0');
		}
		if (nptr[i] == '-')
			c = -1;
	}
	c = c * (int)b;
	return (c);
}

int	main(void)
{
	int idx;
	char *c_atoi_test[7] = {"1a7813", "-1-29", "593", "a", "-2147483648" , "2147483647" , "-+42" };

	idx = 0;
	printf("%s", "ATOI\n");
	while (*c_atoi_test[idx] && idx <= 6)
	{
		if (ft_atoi(c_atoi_test[idx]) == atoi(c_atoi_test[idx]))
		{
			printf("%s", "sucses");
		}
		else
		{
			printf("%s", "fail\n");
			printf("%i", idx);
			printf("%i", ft_atoi(c_atoi_test[idx]));
		}
		idx++;
		printf("\n\n");
	}
	printf("%s", "atoi ende");
}
