/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:56:26 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/16 11:10:19 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i_cont;
	char			*c_retstr;

	i_cont = 0;
	while (s[i_cont])
	{
		i_cont++;
	}
	c_retstr = malloc(i_cont);
	if (c_retstr == NULL)
		return (NULL);
	i_cont = 0;
	while (s[i_cont])
	{
		c_retstr[i_cont] = (*f)(i_cont, s[i_cont]);
	}
	return (c_retstr);
}
