/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:26:38 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/14 16:40:40 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest,const void *src, size_t n)
{
	size_t	i;
	char	temp[n];

	i = 0;
	while ( i < n )
	{
		temp[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while ( i < n )
	{
		((char *)dest)[i] = temp[i];
		i++;
	}
	return(dest);
}

int	main(void)
{

	char	*jeanJacques;

	jeanJacques= memmove("jean" ,"jacques", 3);
	/*printf("%p\n", ft_memmove(jean, jacques, 3));*/
	printf("%s\n", jeanJacques);
}
