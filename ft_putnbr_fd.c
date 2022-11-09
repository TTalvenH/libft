/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttalvenh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:53:44 by ttalvenh          #+#    #+#             */
/*   Updated: 2022/11/03 19:09:42 by ttalvenh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < -9)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((n / 10) * (-1), fd);
		ft_putnbr_fd((n % 10) * (-1), fd);
	}
	else if (n < 0 && n > -10)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n <= 9 && n >= 0)
		ft_putchar_fd(n + '0', fd);
}
