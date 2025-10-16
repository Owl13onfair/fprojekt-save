/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:24:42 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 17:13:22 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);
char	**ft_split_help(char const *s, char c, char **ret);

// int	main(void)
// {
// 	int		i;
// 	char	**l;

// 	i = 0;
// 	l = ft_split("\tlimbo\t\t\thello!\t\twhat\t\taffe\tich", '\t');
// 	printf("\n main");
// 	while (l[i] != NULL)
// 	{
// 		printf("\n%s", l[i]);
// 		printf("\n%p", l[i]);
// 		free(l[i]);
// 		i++;
// 	}
// 	free(l);
// }

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**ret;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			words++;
		else if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	ret = (char **)malloc(sizeof(char **) * words + 1);
	if (ret == NULL)
		return (NULL);
	return (ft_split_help(s, c, ret));
}

char	**ft_split_help(char const *s, char c, char **ret )
{
	int	i;
	int	j;
	int	words;

	i = 0;
	j = 0;
	words = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c && s[i] != '\0')
			j = -1;
		else if ((s[i] != c && s[i - 1] == c) && s[i] != '\0')
			j = -1;
		if (j++ == -1)
		{
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			ret[words] = (char *)malloc(sizeof(char) * j + 1);
			if (ret[words] == NULL)
			{
				while (words-- >= 0)
					free(ret[words]);
				return (free(ret), NULL);
			}
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
			{
				ret[words][j] = s[i + j];
				j++;
			}
			ret[words][j] = '\0';
			words++;
		}
		i++;
	}
	return (ret);
}

// int main(void)
// {
// char **k;
// k = ft_split("", 'z');
// if (ft_split("", 'z') == NULL)
// 	printf("NULL");
// 	else
// 	printf("OK");
// 	if(k[0] == 0)
// 	printf("OK");
// }
