/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:57:56 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/16 12:07:21 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*check_uniques(char *chaine)
{
	int	i;
	int	j;
	int	k;
	int	compteur;
	char	*uniques;

	i = 0;
	while (chaine[i])
		i++;
	uniques = (char*)malloc( i * sizeof(chaine));
	k = 0;
	i = 0;
	while (chaine[i])
	{
		j = 0;
		compteur =0;
		while (chaine[i+j])
		{
			if (chaine[i] == chaine[i+j])
				compteur++;
			j++;
		}
		if (compteur == 1)
		{
			uniques[k] = chaine[i];
			k++;
		}
		i++;
	}
	uniques[k] = '\0';
	return (uniques);
}

/*int	main(void)
{
	char	*test;
	test = check_uniques("jeanclaude");
	printf("%s\n" , test);
}*/

/*char    *ft_strtrim(char const *s1, char const *set)
{
        int     t_s1;
        int     t_set;
        int     i;

        int     debut;
        int     fin;

        char    *ptr;

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
}*/

int    ft_strchr(const char *s, int c)
{
        int     i;

        i = 0;
        while (s[i] != '\0')
        {
                if (s[i] == c)
                        return (1);
                i++;
        }
        return (0);
}


char    *ft_strtrim(char const *s1, char const *set)
{
        int     t_s1;
        int     t_set;
        int     i;
	int	k;
	char	*reset;
	int	deb;
	int	fin;
	char	*trimed;

	while(s1[t_s1])
		t_s1++;
	reset = check_uniques((char *)set);
	while (reset[t_set])
		t_set++;
	i = 0;
	deb = i;
	while ( i < t_set)
	{
		if (ft_strchr(reset, s1[i]))
			deb = i;
		else
			break;
		i++;
	}
	i = t_s1;
	fin = i;
	while (i > t_s1 -t_set)
	{
		if (ft_strchr(reset, s1[i]))
			fin = i;
		else
			break;
		i--;
	}
	trimed = (char *)malloc((fin - deb) * sizeof(s1));
	k = 0;
	while (deb < fin)
	{
		trimed[k] = s1[deb + k];
		k++;
	}
	trimed[k] = '\0';
	return (trimed);
}

int     main(void)
{
        char    *phrase;
        char    *trimmeur;
        char    *receptacle;

        phrase = "trimjetrimletrucatrim";
        trimmeur = "kht";
        receptacle = ft_strtrim(phrase, trimmeur);
        printf("%s\n", receptacle);
}

