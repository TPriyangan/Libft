/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:07:53 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/15 14:54:38 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	c_in_chain(char	*chain, char c)
{
	int	i;

	i = 0;
	while (chain[i])
	{
		if (chain[i] == c)
			return (1);
		i++;
	}
	return(0);
}

int	ft_strlen(char *chain)
{
	int	i;

	i = 0;
	while (chain[i])
	{
		i++;
	}
	return(i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	debut;
	int	fin;
	char	*trimed;

	fin = ft_strlen((char *)s1);
	debut = 0;
	while (s1[debut])
	{
		if (c_in_chain((char *)set,s1[debut]))
		{
			debut++;
		}
		else
			break;
	}
	while (fin > debut)
	{
		if (c_in_chain((char* )set,s1[fin - 1]))
			fin--;
		else
			break;
	}
	i = 0;
	trimed = (char *)malloc((fin - debut) * sizeof(s1));
	while ( debut + i < fin)
	{
		trimed[i] = s1[debut + i];
		i++;
	}
	trimed[i] = '\0';
	return (trimed);

}

int	main(void)
{
	char	*phrase;
	char	*trimmeur;
	char	*receptacle;

	phrase = "trimtriiiittttttrim";
	trimmeur = "minut";
	receptacle = ft_strtrim(phrase, trimmeur);
	printf("%s\n", receptacle);
}
