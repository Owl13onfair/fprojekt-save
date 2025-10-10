/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:45:07 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/09 14:45:24 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


strlcpy (char *dst, const char *src, int size)
{
	int i_conter;

	i_conter = 0;
	while(i_conter < (size-1))
	{
		dst[i_conter] = src[i_conter];
		i_conter++;
	}
	dst[i_conter] = '\0';
}
