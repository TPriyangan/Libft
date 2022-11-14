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

int	ft_search_c_in_string(char *string, char c)
{
	int	i;

	i	= 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	taille;
	char	*s1trim;

	i = 0;
	taille = 0;
	while (s1[i])
	{
		if (ft_search_c_in_string(set,s1[i]) == 0)
		       taille++;
		i++;
	}
	s1trim = (char *)malloc(taille * sizeof(s1));
	i = 0;
	while (i < taille)
	{
		if (ft_search_c_in_string(set,s1[i]) == 1)
			s1trim[i] = s1[i];
		i++;
	}
	s1trim[i] = '\0';
	return (s1trim);
}
