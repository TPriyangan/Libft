/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:34:33 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/23 11:02:15 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_mots(char const *s, char c)
{
	int	i;
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

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	taille;
	size_t	i;
	char	*ptr;

	taille= 0;
	while(s[taille])
		taille++;
	if (start > taille || len <= 0 || !s)
		return(NULL);
	i = 0;
	ptr = (char *)malloc((len + 1) * sizeof(s));
	while ( i < len && s[start])
	{
		ptr[i] = s[start +i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}*/

static unsigned int	ft_lettres(char const *s, unsigned int start, char c)
{
	unsigned int	i;

	i = 0;
	while (s[start + i])
	{
		if (s[start + i] != c)
			i++;
		else 
			return (i);
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	mots;
	char	**ptr;

	mots = 0;
	ptr = (char **)malloc((ft_nbr_mots(s,c) + 1) * sizeof(char **));
	i = 0;
	while(s[i])
	{
		while(s[i] == c && s[i])
			i++;
		if (s[i])
		{
			ptr[mots] = (char *)malloc((ft_lettres(s, i, c) + 1) * sizeof(char *));
			if (!ptr[mots])
				free(ptr[mots]);
			else
				ptr[mots] = ft_substr(s, i, ft_lettres(s, i , c));
			i = i + ft_lettres(s, i ,c); 
			mots++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	*test= "s0kf00ssskssssskpskjsksksssskjj1j1s2fhh22s3jkgg33s444s555s666s777s888s999s101010";
	char	**receptacle;

	receptacle = ft_split(test, 's');
	printf("result: %s %s %s %s\n", receptacle[0] , receptacle[1], receptacle[2], receptacle[10]);
}*/
