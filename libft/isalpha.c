# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   isalpha.c                                          :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 09:27:58 by tpriyang          #+#    #+#              #
#    Updated: 2022/11/08 10:07:14 by tpriyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

int	isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
