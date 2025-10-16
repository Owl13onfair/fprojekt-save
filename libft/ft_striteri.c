/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:29:49 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/15 20:10:21 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int unsigned	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[1]);
		i++;
	}
}
