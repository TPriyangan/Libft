/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:59:56 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/15 11:02:14 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_search_c_in_string(char *string, char c)
{
	int	i;

	i	= 0;
	while (string[i])
	{
		if (string[i] == c)
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
	int	k;


	i = 0;
	taille = 0;
	while (s1[i])
	{
		if (!ft_search_c_in_string((char*)set,s1[i]))
		       taille++;
		i++;
	}
	s1trim = (char *)malloc(taille * sizeof(char));
	i = 0;
	k = 0;
	while (s1[i])
	{
		if (!ft_search_c_in_string((char *)set, s1[i]))
		{
			s1trim[k] = s1[i];
			k++;
		}
		i++;
	}
	s1trim[i] = '\0';
	return (s1trim);
}

int	main(void)
{
	char	*phrase;
	char	*cut;
	char	*receptacle;

	phrase = "cutphrasecutphrasecuuuucuuuucut";
	cut = "cut";
	receptacle = ft_strtrim(phrase ,cut);
	printf("%s\n" , receptacle);
}
