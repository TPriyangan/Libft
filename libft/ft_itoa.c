/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:07:40 by tpriyang          #+#    #+#             */
/*   Updated: 2023/01/12 13:34:26 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long long	n2;
	long long	i;
	long long	negatif;
	long long	mult;
	char	*str;

	mult = 1;
	n2 = n;
	if (n2 < 0)
	{
		negatif = 1;
		n2 = n2 * (-1);
	}
	i = 1;
	while (n2 / mult >= 10)
	{
		i++;
		mult = mult * 10;
	}
	str = (char *)malloc((negatif + i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (negatif == 1)
	{
		str[i] = '-';
		i++;
	}
	while (mult  >= 1)
	{
		str[i] =  n2 / mult +  '0';
		n2 = n2 % mult;
		mult= mult / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
