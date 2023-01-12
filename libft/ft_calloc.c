/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:12:33 by tpriyang          #+#    #+#             */
/*   Updated: 2023/01/12 11:24:14 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*ptr;
	size_t	i;

	i = 0;
	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (size && nmemb / SIZE_MAX > (size || nmemb))
		return (malloc(0));
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (ptr);
	while (i < size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
