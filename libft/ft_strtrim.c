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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return((char *)big);
	while (i < len)
	{
		j = 0;
		while (big [i +j] == little[j])
		j++;
		if (little[j] == '\0')
			return((char *)(big + i));
		i++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	t_s1;
	int	t_set;
	int	i;

	int	debut;
	int	fin;

	char	*ptr;

	i = 0;
	t_s1 = 0;
	t_set = 0;
	while (s1[t_s1])
		t_s1++;
	printf("t_s1 :%d\n" , t_s1);
	while (set[t_set])
		t_set++;
	if (ft_strnstr(s1, set,t_set) != NULL)
		debut = t_set;
	else
		debut = 0;
	printf("Debut :%d\n" , debut);
	if (ft_strnstr(s1+ debut, set, t_set) != NULL)
		fin = t_s1 - t_set;
	else
		fin = t_s1;
	printf("Fin :%d\n" , fin);
	ptr = (char *)malloc((fin-debut)*sizeof(char));
	printf("calcul :%d\n" , fin- debut);
	while (i + debut < fin)
	{
		ptr[i] = s1[i+ debut];
		printf("i :%d\n" , i);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	char	*phrase;
	char	*trimmeur;
	char	*receptacle;

	phrase = "trimjetrimletrucatrim";
	trimmeur = "";
	receptacle = ft_strtrim(phrase, trimmeur);
	printf("%s\n", receptacle);
}
