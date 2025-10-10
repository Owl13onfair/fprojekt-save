/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:10:15 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/09 14:49:35 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

strlcat (char *dst, const char *src, int size)
{
	int i_conter;

	i_conter = 0;
	while((i_conter < (size-1)) && src[i_conter])
	{
		dst[i_conter] = src[i_conter];
		i_conter++;
	}
	dst[i_conter] = '\0';
}
