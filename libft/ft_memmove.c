/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:26:38 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/23 10:05:14 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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

/*int	main(void)
{*/
	/*char	*str1;
	str1 = "0123456789";*/
	char	str1[] = "0123456789";
	/*printf("%p\n", ft_memmove(jean, jacques, 3));*/
	/*ft_memmove(str1+5, str1+3, 7);*/
/*	ft_memmove(str1+2, str1+5 , 10);
	printf("%s\n", str1);
}*/
