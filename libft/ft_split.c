/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:34:33 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/21 12:44:45 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	ptr_compteur;
	int	ptr_calcul;
	char	*strfree;
	char	**str;

	i = 0;
	ptr_compteur = 0;
	ptr_calcul = 0;
	while (s[i])
	{
		j= 0;
		while (s[i+j] != c)
			j++;
		if (j > 0)
		{
			strfree = (char *)malloc( (j + 1) * sizeof(char));
			j = 0;
			while (s[i+j] != c)
			{
				strfree[j] = s[i+j];
				j++;
			}
			strfree[j] = '\0';
			free(strfree);
			ptr_calcul = j + 2;
		}
		i++;
	}
	str= (char **)malloc((ptr_calcul +1) * sizeof(char**));
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i+j] !=c)
		{
			strfree[j] = s[i+j];
			j++;
		}
		if (j > 0)
		{
			ptr_compteur++;
			j = 0;
			while ( s[i+j] != c)
			{
				str[ptr_compteur][j] = s[i+j];
				j++;
			}
			free(strfree);
		}
	}
	return(str);
}

int	main(void)
{
	char	*test= "Je suis sur le sol avec solene";
	char	**receptacle;

	receptacle = ft_split(test, 's');
	printf("result: %s\n", receptacle[1]);
}
