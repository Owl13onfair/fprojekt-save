/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:30:24 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/15 20:08:04 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	while (i < n && src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
