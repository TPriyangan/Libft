/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:31:40 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/23 10:46:05 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	taille;
	size_t	i;
	char	*str;

	taille = 0;
	while (s[taille])
	{
		taille++;
	}
	if ( start > taille || len <= 0 || !s)
		return (NULL);
	i = 0;
	str = (char *)malloc(len * sizeof(s));
	while (i < len && s[start + i])
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*alphabet;
	
	alphabet = "";
	printf("%p\n" , ft_substr(alphabet, 4, 350));
}*/
