/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:00:52 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/10 18:44:48 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// tester for libFT
int		ft_atoi(const char *nptr);
size_t	ft_strlen(char *str);
int		ft_isalpha(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);

int	main(void)
{
	int		idx;
	char	*c_atoi_test[7] = {"1a7813", "-1-29", "593", "a", "-2147483648",
			"2147483647", "-+42"};
	char	*c_strlen_test[] = {"12421", "ffe", "934593", NULL};
	char	c_isalpha_test[] = {96, 'a', 'z', 123, 'k', '1', '8', ';', 64, 'A',
			'Z', 91, '\n'};
	char	c_isalnum_test[] = {96, 'a', 'z', 123, 'k', '1', '8', ';', 64, 'A',
			'Z', 91, '\n'};
	char	c_isascii_test[] = {96, 'a', 'z', 123, 'k', '1', '8', ';', 64, 'A',
			'Z', 91, '\n'};
	char	*str;

	idx = 0;
	// ------------------------------------------------------------------------------------
	printf("%s", "ATOI\n");
	while (*c_atoi_test[idx])
	{
		if (ft_atoi(c_atoi_test[idx]) == atoi(c_atoi_test[idx]))
			printf("%s", "-");
		else
		{
			printf("%s", "fail\n");
			printf("%i", idx);
		}
		idx++;
	}
	printf("%s", "atoi ende");
	// ------------------------------------------------------------------------------------
	idx = 0;
	printf("%s", "strlen\n");
	while (*c_strlen_test[idx])
	{
		if (ft_strlen(c_strlen_test[idx]) == strlen(c_strlen_test[idx]))
			printf("%s", "-");
		else
		{
			printf("%s", "fail\n");
			printf("%i", idx);
		}
		idx++;
	}
	// ------------------------------------------------------------------------------------
	idx = 0;
	printf("%s", "isalpha\n");
	while (c_isalpha_test[idx])
	{
		if (ft_isalpha(c_isalpha_test[idx]) == isalpha(c_isalpha_test[idx]))
			printf("%s", "-");
		else
		{
			printf("%s", "fail\n");
			printf("%i", idx);
		}
		idx++;
	}
	// ------------------------------------------------------------------------------------
	idx = 0;
	printf("%s", "isalnum\n");
	while (c_isalnum_test[idx])
	{
		if (ft_isalnum(c_isalnum_test[idx]) == isalnum(c_isalnum_test[idx]))
			printf("%s", "-");
		else
		{
			printf("%s", "fail\n");
			printf("%i", idx);
		}
		idx++;
	}
	printf("%s", "isascii\n");
	while (c_isalnum_test[idx])
	{
		if (ft_isalnum(c_isalnum_test[idx]) == isalnum(c_isalnum_test[idx]))
			printf("%s", "-");
		else
		{
			printf("%s", "fail\n");
			printf("%i", idx);
		}
		idx++;
	}
	printf("%s", "isascii\n");
	while (c_isascii_test[idx])
	{
		if (ft_isascii(c_isascii_test[idx]) == isascii(c_isascii_test[idx]))
			printf("%s", "-");
		else
		{
			printf("%s", "fail\n");
			printf("%i", idx);
		}
		idx++;
	}
	str = "iugiuyahsvibuyijan[opwjkmlubavuouwib]";
	printf("strchr");
	if ((strchr(str, 121) == ft_strchr(str, 121)) && (strchr(str,
				190) == ft_strchr(str, 190)))
		printf("%s", "-");
	else
	{
		printf("%s", "failstrchr");
	}
}

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

size_t	ft_strlen(char *str)
{
	int	i_cont;

	i_cont = 0;
	while (str[i_cont])
		i_cont++;
	return (i_cont);
}

int	ft_isalpha(char c)
{
	if (!((c >= 65 && 90 <= c) || (c >= 97 && 122 <= c)))
		return (0);
	return (1);
}

int	ft_isalnum(char c)
{
	if (!((c >= 65 && 90 <= c) || (c >= 97 && 122 <= c) || (c >= 48
				&& 57 <= c)))
		return (0);
	return (1);
}

int	ft_isaskii(char c)
{
	if (!((c >= 0 && 127 <= c)))
		return (0);
	return (1);
}

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	i_conter;

	i_conter = 0;
	while ((i_conter < (size - 1)) && src[i_conter])
	{
		dst[i_conter] = src[i_conter];
		i_conter++;
	}
	dst[i_conter] = '\0';
	return (0);
}

int	ft_isascii(char c)
{
	if (!((c >= 0 && 127 <= c)))
		return (0);
	return (1);
}

char	*ft_strchr(const char *s, int c)
{
	char *ptr;
	int i_cont;

	i_cont = 0;
	while (s[i_cont])
	{
		if (s[i_cont] == c)
		{
			ptr = (char *)s + i_cont;
			return (ptr);
		}
		i_cont++;
	}
	return (NULL);
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
	else	testb++;
		testb++;
		testb++;
		testb++;
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