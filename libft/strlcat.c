/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:04:50 by tpriyang          #+#    #+#             */
/*   Updated: 2022/11/09 13:23:31 by tpriyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;
	size_t	save;

	i = 0;
	while (dst[i] != '\0')
		i++;
	save = i;
	i2 = 0;
	while (i < save + size)
	{
		dst[i] = src[i2];
		i++;
		i2++;
	}
	dst[i] = '\0';
	return(i);
}