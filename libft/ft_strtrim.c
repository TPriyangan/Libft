/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:59:56 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/14 17:03:41 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;
	int	*s1dup;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] ==(s1[i]))
			{
				count	= count + 1;
				break;
			}
			j++;
		}
		i++;
	}
	s1dup = (char*)malloc(count * sizeof(s1));
	i = 0;
	while ( s1[i])
	{
		j = 0;
		while(set[j])
		{
			while (set[j] == s1[i])
				j++;


		}
	}
}
