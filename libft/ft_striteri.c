/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:12:51 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/22 14:21:03 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_toupper(unsigned int i, char *s)
{
	s[i] = s[i] - 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		printf("%d\n", i);
		printf("%d\n", s[i]);
		f(i,s);
		i++;
	}
}

int	main(void)
{
	char	*alphabet;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	ft_striteri(alphabet,ft_toupper);
	printf("%s\n", alphabet);
}
