/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:43:29 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/22 15:08:26 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ( i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
