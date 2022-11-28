/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:10:45 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/28 11:58:16 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	k;
	char	*ptr;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ptr = (char *)malloc((i+j) * sizeof(s1));
	if (!ptr)
		return (NULL);
	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		ptr[k] = s2[k-i];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	*jean;
	char	*jacques;

	jean = "";
       	jacques = "Jacques";
	printf("%p\n", ft_strjoin(jean,jacques));
}*/
