/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:04:50 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/25 13:17:57 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if ( size == 0)
		return (i);
	while (dst[i])
		i++;
	while (src[j])
		j++;
	while (i+ k < size && src[k])
	{
		dst[i+k] = src[k];
		k++;
	}
	dst[i+k] = '\0';
	return (i+j);
}
