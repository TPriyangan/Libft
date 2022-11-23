/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:43:26 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/23 10:28:23 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(i);
}

/*int	main(void)
{
	char	dest[10];
	char	*source;

	source = "Pierre";
	printf("%ld\n" ,ft_strlcpy(dest,source,3*sizeof(char)));
	printf("%ld\n" ,strlcpy(dest,source,3*sizeof(char)));	
}*/
