/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:10:22 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/14 12:53:54 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
		i++;
	dup = (char *)malloc( i * sizeof(s));
	j = 0;
	while (s[j] != '\0')
	{
		dup[j] = s[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

int	main(void)
{
	char	*alphabet;
	char	*vide;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	vide = "";
	printf("ft_strdup: %s\n", ft_strdup(alphabet));
	printf("strdup:   %s\n", strdup(alphabet));
	printf("ft_strdup: %s\n", ft_strdup(vide));
	printf("strdup:   %s\n", strdup(vide));
}
