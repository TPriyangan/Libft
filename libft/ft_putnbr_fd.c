/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:01:57 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/23 10:44:33 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	diviseur;

	if ( n == -2147483648)
	{
		write(fd, "-2147483648", 10);
		return;
	}
	if (n == 0)
		ft_putchar('0' ,fd);
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-', fd);
	}
	diviseur = 1;
	while (diviseur <= n)
		diviseur = diviseur * 10;
	while (diviseur > 1)
	{
		diviseur = diviseur/10;
		ft_putchar((n/diviseur + '0'), fd);
		n = n%diviseur;
	}
}


/*
int	main(void)
{
	ft_putnbr_fd(1, 1);
	printf("\n");
	ft_putnbr_fd(11, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
}*/
