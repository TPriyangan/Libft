/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:12:33 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/23 10:26:24 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*ptr;
	int	i;
	
	i = 0;
	ptr = (int *)malloc(nmemb * sizeof(size));
	while ( ptr[i] != '\0')
	{
		ptr[i] = 0;
		i++;
	}
	return ((int *)ptr);
}

/*int	main(void)
{
	int	nmemb;
	int	size;
	int	*testft;
	int	*testcalloc;
	int	*testftnmembnul;
	int	*testnmembnul;

	nmemb = 4;
	size = 4;
	testft = ft_calloc(nmemb, size);
	testcalloc = calloc(nmemb, size);
	testftnmembnul = ft_calloc(1,0);
	testnmembnul = calloc(1,0);
	printf("ft_calloc: %d, %d, %d, %d.\n",testft[0] , testft[1], testft[2], testft[3]);
	printf("calloc: %d, %d, %d, %d.\n",testcalloc[0] , testcalloc[1], testcalloc[2], testcalloc[3]);
	printf("ft_calloc: %d, %d, %d, %d.\n",testftnmembnul[0] , testftnmembnul[1], testftnmembnul[2], testftnmembnul[3]);
	printf("calloc: %d, %d, %d, %d.\n",testnmembnul[0] , testnmembnul[1], testnmembnul[2], testnmembnul[3]);
	printf("calloc: %p\n", calloc(0,1));
	printf("calloc: %p\n", calloc(0,1));
	printf("ft_calloc: %p\n", ft_calloc(0,1));
}*/
