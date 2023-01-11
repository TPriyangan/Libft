/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:04:50 by tpriyang          #+#    #+#             */
/*   Updated: 2023/01/11 14:06:14 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	tdst;
	size_t	tsrc;
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	tdst = ft_strlen(dst);
	tsrc = ft_strlen(src);
	while (tdst + i < size -1)
	{
		dst[tdst + i] = src[i];
		i++;
	}
	dst[tdst + i] = '\0';
	if (tdst > size)
		return (tsrc + size);
	return (tdst + tsrc);
}
