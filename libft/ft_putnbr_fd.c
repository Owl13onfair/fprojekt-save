/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 20:25:59 by mmantz            #+#    #+#             */
/*   Updated: 2025/10/14 12:23:57 by mmantz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);

// not keap
void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}

// char	*ft_itoa(int n)
// {
// 	int			i_count;
// 	int long	ln;
// 	int long	inteater;
// 	char		*retstr;

// 	i_count = 0;
// 	inteater = 1000000000000;
// 	ln = n;
// 	if (ln < 0)
// 		ln = ln * -1;
// 	retstr = malloc(12);
// 	if(n < 0)
// 		retstr[i_count] = '-';
// 	if(n < 0)
// 		i_count++;
// 	while (inteater > 0)
// 	{
// 		if((ln / inteater) > 0 || ((n < 0 && i_count >= 2 )||(n > 0
					// && i_count >= 1 ) )  )
// 			retstr[i_count] = (char) (ln / inteater) + 48;
// 		if((ln / inteater) > 0 || ((n < 0 && i_count >= 2 )||(n > 0
					// && i_count >= 1 ) )  )
// 			i_count++;
// 		ln = ln % inteater;
// 		inteater = inteater / 10;
// 	}
// 	if(i_count == 0 )
// 		retstr[i_count] = (char) 48;
// 	return(retstr);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	int	i_cont;

// 	i_cont = 0;
// 	while (s[i_cont])
// 	{
// 		t_putchar_fd(s[i_cont],fd);
// 		i_cont++;
// 	}
// }

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }
