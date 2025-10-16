/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 20:18:49 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/14 12:23:46 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	int	i_cont;

	i_cont = 0;
	while (s[i_cont])
	{
		ft_putchar_fd(s[i_cont], fd);
		i_cont++;
	}
}

// void	ft_putchar_fd(char c, int fd);

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }