/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcahr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:58:34 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/14 14:05:57 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

void	ft_putcahr_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main (void)
// {

// 	ft_putchar_fd('a', open(grass));
// }

// neads to be tested
