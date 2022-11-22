/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:43:26 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/14 13:19:19 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(i);
}

int	main(void)
{
	char	dest[10];
	char	*source;

	source = "Pierre";
	printf("%ld\n" ,ft_strlcpy(dest,source,3*sizeof(char)));
	printf("%ld\n" ,strlcpy(dest,source,3*sizeof(char)));	
}
