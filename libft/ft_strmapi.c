/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:02:38 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/22 13:19:54 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	ft_toupper(unsigned int i,char c)
{
	
	if ( c >= 'a' && c <= 'z')
		c = c -20+i;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char	*ptr;

	i = 0;
	while (s[i])
		i++;
	ptr = (char *)malloc((i+ 1) * sizeof(s));
	if (!ptr)
		return (NULL);
	j = 0;
	while (s[j])
	{
		ptr[j] = f(j,s[j]);
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

int	main(void)
{
	printf("%s\n",ft_strmapi("salutationJoris",ft_toupper));
}

