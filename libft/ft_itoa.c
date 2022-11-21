/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:07:40 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/21 10:48:08 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	int	i;
	int	j;
	int	n2;
	int	negatif;
	int	mult;
	char	*str;

	mult = 1;
	negatif = 0;
	if (n < 0)
	{
		negatif = 1;
		n = n * (-1);
	}
	n2 = n;
	i = 0;
	while ( n/mult >= 10)
	{
		i++;
		mult = mult*10;
	}
	str = (char *)malloc((i + negatif + 1) * sizeof(char *));
	j = 0;
	if ( negatif == 1)
	{
		str[j] = '-';
		printf("str: %s\n", str);
		j++;
		printf("j: %d\n", j);
	}
	while ( mult  >= 1)
	{
		str[j] =  n2/mult +  '0';
		n2 = n2 % mult;
		mult= mult/10;
		j++;
	}
	str[j] = '\0';
	return (str);
}


/*
 24568/10 = 2456,8.
 24568/10000=2,4568.
 */

int	main(void)
{
	char	*test;

	test = ft_itoa(-1256);
	printf("%s\n", test);
}
