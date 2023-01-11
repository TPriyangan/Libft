/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:34:33 by tpriyang          #+#    #+#             */
/*   Updated: 2023/01/11 13:23:22 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbr_mots(char const *s, char c)
{
	size_t	i;
	int	mot;

	i = 0;
	mot = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			while (s[i] != c && s[i])
				i++;
			mot++;
		}
	}
	return (mot);
}

static size_t	ft_lettres(char const *s, size_t start, char c)
{
	size_t	i;

	i = 0;
	while (s[start + i] && s[start +i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	mots;
	char	**ptr;

	mots = 0;
	if (!s)
		return(NULL);
	ptr = (char **)malloc((ft_nbr_mots(s,c) + 1) * sizeof(char*));
	if (!ptr)
		return(NULL);
	i = 0;
	while(s[i])
	{
		while(s[i] == c && s[i])
			i++;
		if (s[i])
		{
			ptr[mots] = ft_substr(s, i, ft_lettres(s, i , c));
			i = i + ft_lettres(s, i ,c);
			mots++;
		}
	}
	ptr[mots] = 0;
	return (ptr);
}

/*int	main(void)
{
	char *test = "          ";
	char	**receptacle;

	receptacle = ft_split(test, ' ');
	printf("result:*%s %s %s %s %s*\n", receptacle[0], receptacle[1], receptacle[2], receptacle[3] , receptacle[4]);
}*/
