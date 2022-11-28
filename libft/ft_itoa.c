/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:07:40 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/28 14:58:36 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long long	n2;
	long long	i;
	long long	j;
	long long	negatif;
	long long	mult;
	char	*str;

	n2 = n;
	mult = 1;
	negatif = 0;
	if (n2 < 0)
	{
		negatif = 1;
		n2 = n2 * (-1);
	}
	i = 1;
	while ( n2/mult >= 10)
	{
		i++;
		mult = mult*10;
	}
	str = (char *)malloc((negatif + i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	if ( negatif == 1)
	{
		str[j] = '-';
		j++;
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

int	main(void)
{
	char	*test;

	test = ft_itoa(-1256);
	printf("%s\n", test);
}*/
