/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:51:29 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 20:45:08 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	ft_atoi(const char *nptr)
{
	int			i;
	int long	b;
	int			c;
	int schon;

	schon = 1;
	c = 1;
	b = 0;
	i = -1;
	while (nptr[++i])
	{
		if (! ((nptr[i] >= '0' && nptr[i] <= '9') || (((nptr[i] == '-'|| nptr[i] == '+')
			|| nptr[i] == ' ' || (nptr[i]>= 9 && nptr[i]<= 13))&& schon))  )
		{
			c = c * (int)b;
			return (c);
		}
		if ('0' <= nptr[i] && '9' >= nptr[i])
		{
			b = (long)b * 10;
			b = b + (long)(nptr[i] - '0');
			schon = 0;
		}
		if (nptr[i] == '-')
			c = -1;
		if(nptr[i] == '-' || nptr[i] == '+' )
			schon = 0;
	}
	return (c * (int)b);
}

int	main(void)
{
	int idx;
	char *c_atoi_test[12] = {"-0", "-1-29", "593", "a", "-2147483648" ,
	"2147483647", "++42" , "+-54" , "++47" , "\e475" , "\t\n\r\v\fd469 \n" , NULL
};

	idx = 0;
	printf("%s", "ATOI\n");
	while ( idx <= 10)
	{

		if (ft_atoi(c_atoi_test[idx]) == atoi(c_atoi_test[idx]))
		{
			printf("%s%s   %d", "sucses",c_atoi_test[idx], idx);
		}
		else
		{
			printf("%s", "fail\n");
			printf("%i\nmine", idx);
			printf("%i\norginal", ft_atoi(c_atoi_test[idx]));
			printf("%i", atoi(c_atoi_test[idx]));
		}
		idx++;
		printf("\n\n");
	}
	printf("%s", "atoi ende");
}
